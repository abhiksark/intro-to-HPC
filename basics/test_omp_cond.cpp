#include <iostream> 
#include <omp.h>
using namespace std;

int main(int argc, char* argv[])
{
	for (int i = 1; i <= 4; ++i)
	{
		std::cout<<"Number of threads:"<<i<< endl;
 		#pragma omp parallel num_threads(i) if(parallel: i > 2)
 		{
 			const int tid = omp_get_thread_num(); // get my ID
 			#pragma omp critical // the next line is a critical section!
			std::cout << "Hello from thread " << tid << '\n';
 		}
 	}
 return 0;
}
