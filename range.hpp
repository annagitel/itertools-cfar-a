//
// Created by asandler on 6/13/20.
//

#ifndef ITERTOOLS_CFAR_A_RANGE_HPP
#define ITERTOOLS_CFAR_A_RANGE_HPP

namespace itertools
{
	template <typename D>
	class range
	{
	private:
	public:
		class iterator
		{
		private:
			D at;

		public:
			iterator(D at) : at(at) {}
			bool operator!=(iterator const &other) const { return at != other.at; }
			D const &operator*() const { return at; }
			iterator &operator++()
			{
				++at;
				return *this;
			}
		};
		D begin_val;
		D end_val;

	public:
		range(D b_val, D e_val) : begin_val(b_val), end_val(e_val) {}
		iterator begin() { return iterator(begin_val); }
		iterator end() { return iterator(end_val); }
		const iterator begin() const { return iterator(begin_val); }
		const iterator end() const { return iterator(end_val); }
	};
};
#endif //ITERTOOLS_CFAR_A_RANGE_HPP
