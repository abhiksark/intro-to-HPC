#include <iostream>
#include <omp.h>

int main(int argc, char* argv[])
{
	const int N = 100;
	double A[N];

	 #pragma omp parallel
	 {	
		 #pragma omp for
 		for (int i = 0; i < N; ++i)
		{
			const int tid = omp_get_thread_num(); // get my ID
 			A[i] =i; // do something here
			std::cout<<"Thread Id:"<<tid<<",A[i]:"<<A[i]<<std::endl;
		}
	 }	
 return 0;
 }
