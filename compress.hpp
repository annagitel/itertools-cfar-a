//
// Created by asandler on 6/13/20.
//

#ifndef ITERTOOLS_CFAR_A_COMPRESS_HPP
#define ITERTOOLS_CFAR_A_COMPRESS_HPP

#include <iostream>
using namespace std;
namespace itertools
{

	template <typename M, typename K>
	class compress{
	private:
		class iterator{
		private:
			int at;

		public:
			iterator(int at) : at(at) {}
			bool operator!=(iterator const &other) const { return at != other.at; }
			int const &operator*() const { return at; }
			iterator &operator++(){
				++at;
				return *this;
			}
		};
		const M &m_container;
		const K &m2_container;

	public:
		compress(const M &container, const K &container2) : m_container(container), m2_container(container2){}
		iterator begin(){return iterator(0);}
		iterator end(){return iterator(2);}
	};
};
#endif //ITERTOOLS_CFAR_A_COMPRESS_HPP