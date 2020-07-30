# bit_manipulation-1
Check whether given numbers are in power of 2 using bitwise operator.


Basically the logic here is if we do and bitwise AND operation(&) of the given number with one less than the number we should always get 0 if the number is in power of 2
eg n=4
binary equivalent of 4(n)=100
binary equivalent of 3(n-1)=011

4 & 3 => (1 0 0) & (0 1 1) => (0 0 0) 

