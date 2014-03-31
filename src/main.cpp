#include <stdlib.h>
#include "bits_macro.hpp"

int main(int argc, char **argv)
{
	if(argc < 2 )
	{
		cout <<" Usage : ./a.out num . " << endl;
		exit(-1);
	}
	int num = atoi(argv[1]);
	print_bits(num);
	if(check_bit(num, 0)) 
		cout <<"bit 0 is set. " << endl;
	else
		cout <<"bit 0 is not set. " << endl;
	if(check_bit(num, 5))
		cout <<"bit 5 is set. " << endl;
	else
		cout <<"bit 5 is not set. " << endl;

/*
 * 	clear bit op 
 */
	cout <<"clear bit 0 ";
	num = num & ~(0x1 << 0);
	print_bits(num);
	cout <<"clear bit 5 ";
	clear_bit(num, 5);
	print_bits(num);

/*
 * 	set bit op
 */
	cout <<"set bit 0 ";
	num = num | (0x1 << 0);
	print_bits(num);
	cout <<"set bit 5 ";
	set_bit(num, 5);
	print_bits(num);

/*
 * toggle bit op
 */
	cout <<"toggle bit 0 ";
	num = num ^ (0x1 << 0);
	print_bits(num);
	cout <<"toggle bit 5 ";
	toggle_bit(num, 5);
	print_bits(num);

	cout <<"count of bits : " << cbits(num) << endl;
	if(is_power2(num))
		cout << num <<" is power of 2." << endl;
	else
		cout << num <<" is not power of 2. " << endl;

	if(is_odd(num))
		cout << num <<" is odd. " << endl;
	else
		cout << num <<" is not odd. " << endl;
	
	if(is_even(num))
		cout << num <<" is even. " << endl;
	else
		cout << num <<" is not even. " << endl;

	cout <<"set even bits. ";
	set_even(num);
	print_bits(num);

	cout <<"clear all bits. ";
	clear_all(num);
	print_bits(num);
	
	cout <<"set odd bits. ";
	set_odd(num);
	print_bits(num);
	return 0;
}
