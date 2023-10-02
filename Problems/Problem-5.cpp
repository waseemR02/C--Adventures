#include <iostream>
#include <bitset>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    if(bits.test(3))
        {bits<<=1;
        bits.set(0);}
    else
        bits<<=1;
    
    return bits;

}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}
// using test() and set()