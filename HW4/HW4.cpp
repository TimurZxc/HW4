#include <iostream>
#include <cstdarg>

double srednee(double n, ...) {
	va_list list;
	va_start(list, n);
	double sum = n, count = 1;
	int z = va_arg(list, int);
	do {
		sum += z;
		count++;
		z = va_arg(list, int);
	} while (z != -1);

	va_end(list);
	return sum / count;
}
double even_count(int n, ...) {
	va_list list;
	va_start(list, n);
	int count = 0, z = va_arg(list, int);
	int size = n;
	
	for (int i = 0;i < size;++i) {
		z = va_arg(list, int);
		if (z % 2 == 0) {
			count++;
		}
		
	}
	return count;
}


int main()
{
	double s = srednee(4, 5, 1, 3, 0, 6, 3, -1);
	std::cout << s << std::endl;
	double e = even_count(7, 1, 2, 3, 4, 3, 2, 1);
	std::cout << e;
	e = even_count(7, 1, 2, 3, 3, 2, 1);
	std::cout << e;
}