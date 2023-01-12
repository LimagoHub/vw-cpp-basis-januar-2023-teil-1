#pragma once
#include <memory>
namespace vw
{
	namespace collections
	{
		/// <summary>
		/// Eine tolle Klasse
		/// </summary>
		/// <typeparam name="T"></typeparam>
		template<class T>
		class List
		{
		public:
			List() = default;
			virtual ~List() = default;


			/// <summary>
			/// 
			/// </summary>
			/// <param name="value"></param>
			virtual void append(const T value) = 0;
			/// <summary>
			/// 
			/// </summary>
			/// <returns></returns>
			virtual bool update(T newValue) const = 0;
			virtual T get() const = 0;
			virtual bool remove() = 0;
			

			// Navigationsmethode
			virtual bool move_next() = 0;
			virtual bool move_previous() = 0;
			virtual bool move_first() = 0;
			virtual bool move_last() = 0;

			// Status
			virtual bool is_empty() const = 0;
			virtual bool is_end_of_list() const = 0; // wenn cursor AUF dem letzeten Element steht ODER die Liste leer ist
			virtual bool is_begin_of_list() const = 0; // wenn cursor AUF dem letzeten Element steht ODER die Liste leer ist
			
		};
	}
}



