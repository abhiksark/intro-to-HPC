#include <iostream>
#include <stdio.h>
#include <omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	#pragma omp parallel
	{
       		const int tid = omp_get_thread_num(); // get my ID
		#pragma omp critical // the next line is a critical section!
		std::cout << "Hello from thread " << tid << '\n';
 	}
	return 0;
}
