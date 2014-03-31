#ifndef __BITS_MACRO_HPP_
#define __BITS_MACRO_HPP_

#include <iostream>
#include <limits.h>
#include <string>
using namespace std;

#define check_bit(x, i)		(x & (0x1 << i) )	
#define clear_bit(x, i)		(x = x & ~(0x1 << i) )
#define set_bit(x, i)		(x = x | (0x1 << i) )
#define toggle_bit(x, i)	(x = x ^ (0x1 << i) )
#define msb(x)			(x & 0xFF000000)
#define lsb(x)			(x & 0x000000FF)
#define shift_left(x, i)	(x = x << i) 
#define shift_right(x, i)	(x = x >> i)

void swap_short(short &num)
{
	short b1 = (num & 0xFF00) >> 8;
	short b2 = (num & 0x00FF) << 8;
	num = b1 | b2;
}

void swap_int(int &num)
{
	num = (num & 0xFF000000) >> 16 |
		(num & 0x00FF0000) >> 8 |
		(num & 0x0000FF00) << 8 |
		(num & 0x000000FF) << 16;
}

void clear_all(int &num)
{
	num = num & ~(INT_MAX);
}

void set_even(int &num)
{
	num = num | 0x55555555;
}

void set_odd(int &num)
{
	num = num | 0xAAAAAAAA;
}

int cbits(unsigned int num)
{
	int c = 0;
	while( num!= 0)
	{
		num &= (num-1);
		c++;
	}
	return c;
}

bool is_power2( int num)
{
	return !(num&(num-1));
}

bool is_odd(int num)
{
 	return (num & 0x1) != 0;
}

bool is_even(int num)
{
  return ( num & 0x1) == 0;
}

void print_bits(int num)
{
	unsigned int mask = 0x10000000;
	string s;
	while(mask)
	{
		s += (num & mask) ? '1' : '0';
		mask = mask >> 1;
	}
	cout << s << endl;
}

#endif
