#pragma once
#include "List.h"
#include <memory>
namespace vw
{
	namespace collections {


		template<class T>
		class Kettenglied;
		
		
		template<class T>
		class ListImpl :public List<T>
		{
		private:
			std::shared_ptr<Kettenglied<T>> start;
			std::shared_ptr<Kettenglied<T>> akt;
		public:


			ListImpl()
				
			{
			}

			void append(const T value) override
			{
				auto neu = std::make_shared < Kettenglied<T>>(Kettenglied<T>{ value });
				if(is_empty())
				{
					start =  neu;
				} else
				{
					this->move_last();
					akt->nach = neu;
					neu->vor = akt;
				}
				akt = neu;
			}


			bool update(T newValue) const override
			{
				if(is_empty())
					return false;
				akt->data = newValue;
				return true;
			}

			T get() const override
			{
				if(is_empty())return T{};// exception ausloesen
				
				return akt->data;
			}
			bool remove() override // Bitte nicht
			{
				return false;
			}
			
			bool move_next() override
			{
				if (is_end_of_list()) return false;
				akt = akt->nach;
				return true;
			}
			
			bool move_previous() override
			{
				if (is_begin_of_list()) return false;
				akt = akt->vor.lock();
				return true;
			}
			
			bool is_empty() const override
			{
				return start.use_count()==0;
			}
			bool is_end_of_list() const override
			{
				return is_empty() || akt->nach.use_count() == 0;
			}
			bool is_begin_of_list() const override
			{
				return akt == start;
			}
			~ListImpl() override = default;
		};
		
		template<class T>
		class Kettenglied
		{
			friend ListImpl<T>;
			std::shared_ptr<Kettenglied<T>> nach;
			std::weak_ptr<Kettenglied<T>> vor;
			T data;

			Kettenglied<T>(const T& data)
				: data(data)
			{
			}
		};
	}
}

