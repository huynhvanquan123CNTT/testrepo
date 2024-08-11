#include<stdio.h>

int CountPositiveArray(int arr[], int size){
	if(size == 0){
		return 0;
	}else{
		if(arr[size-1] > 0){
			return arr[size-1] + CountPositiveArray(arr, size-1);
		}else{
			return CountPositiveArray(arr, size-1);
		}
	}
}

float FindMaxArray(float a[], int n){
	if(n == 1){
		return a[0];
	}else{
		if(a[n-1] > FindMaxArray(a, n-1)){
			return a[n-1];
		}else{
			return FindMaxArray(a, n-1);
		}
	}
}

int FindLastEvenArray(int arr[], int size){    // Tìm mang chan cuoi cùng
	if(size == 0){
		return -1;
	}else{
		if(arr[size-1] % 2 == 0){
			return arr[size-1];
		}else{
			return FindLastEvenArray(arr, size-1);
		}
	}
}

int SumDigits(int n){	// Tong cac chu so
	if(n<10)
		return n;
	else
		return n % 10 + SumDigits(n/10);
}

int FindLastPositionArray(int arr[], int x, int size){	// Tim mang vi tri cuoi cung
	if(size == 0){
		return -1;
	}else{
		if(arr[size-1] == x){
			return size-1;
		}else{
			return FindLastPositionArray(arr, x, size-1);
		}
	}
}

int SumOldArray(int arr[], int size){	// Tong cac so le trang mang
	if(size == 0){
		return 0;
	}else{
		if(arr[size-1] % 2 != 0){
			return arr[size-1] + SumOldArray(arr, size-1);
		}else{
			return SumOldArray(arr, size-1);
		}
	}
}

float SumArray(float arr[], int n){		// Tong mang
	if(n == 0)
		return 0;
	else
		return arr[n-1] + SumArray(arr, n-1);
}

double SumN(int n){		// Tong tu 1 -> n
	if(n == 0)
		return 0;
	else
		return n + SumN(n-1);
}

int Ackermann(int n, int m){
	if(n == 0)
		return m+1;
	else if(m == 0)
		return Ackermann(n-1,1);
	else
		return Ackermann(n-1, Ackermann(n,m-1));
}

long Factorial(int n){
	if(n == 1)
		return 1;
	else
		return n * Factorial(n-1);
}
int main(){
	/*
	int n = 6;
	int A[] = {4, 1, 3, 5, 2};
	int res = CountPositiveArray(A, n);
	printf("%d", res); */
	
	/*
	int n = 6;
	float A[] = {4, 1, 3, 5, 2};
	float res = FindMaxArray(A, n);
	printf("%f", res);  */
	
	/*
	int n = 6;
	int A[] = {4, 1, 3, 6, 5, 6};
	int res = FindLastEvenArray(A, n);
	printf("%d", res);	*/
	
	/*
	unsigned int res = SumDigits(1234);
	printf("%u", res);	*/
	
	/*
	int n = 6, x = 6;
	int A[] = {4, 1, 3, 6, 5, 6};
	int res = FindLastPositionArray(A, x, n);
	printf("%d", res);		*/
	
	/*
	int n = 6;
	int A[] = {4, 1, 3, 6, 5, 3};
	int res = SumOldArray(A, n);
	printf("%d", res);		*/
	
	/*
	int n = 5;
	float A[] = {4, 1, 3, 5, 4};
	float res = SumArray(A, n);
	printf("%f", res);		*/
	
	/*
	long c;
	printf("%lu", res);		*/
	
	/*
	int n = 3, m = 1;
	long unsigned int res = Ackermann(n,m);
	printf("%lu", res);		*/
	
	
	int n = 3;
	long unsigned int res = Factorial(n);
	printf("%ld", res);
	
	
	
	
	
}
