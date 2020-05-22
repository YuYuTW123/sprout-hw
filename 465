#include <iostream>

void EzSort(int N, int const **ptr_array)
{
	int tmp;
	for(int i = N-1; i > 0; i--)
	{
    	for(int j = 0; j < i-1; j++)
    	{
        	if( *ptr_array[j] > *ptr_array[j + 1])
        	{
            	tmp = *ptr_array [j];
            	ptr_array[j] = ptr_array[j + 1];
            	ptr_array[j + 1] = &tmp;
        	}
    	}
	}
}
int main() {
    int N, arr[1000], *ptr[1000];
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
        ptr[i] = &(arr[i]);
    }
    EzSort(N, (int const **)ptr);
    for (int i = 0; i < N; i++) {
        std::cout << *(ptr[i]) << (i == N - 1 ? '\n' : ' ');
    }
}
