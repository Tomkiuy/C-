//Array.cpp
#include <iostream>

using namespace std;

int main(){
	const int size = 5;
	double average, max, sum = 0;
	double P[size] = {48.4, 39.8, 40.5, 42.6, 41.2};
	int i;
	P[0] = 3.2;
	P[3] = P[0]*2.0;
	cout << "下列為一維矩陣 P: \n";
	for (i = 0; i < size; i++)
		cout << P[i] << " ";
	cout << endl;
	
	for (i = 0; i < size; i++)
		sum += P[i];
	average = sum / double(size);
	cout << "陣列 P 的和是: " << sum
		 << "  平均值是: " << average << endl;
	max = P[0];
	for (i = 1; i < size; i++)
		if (max < P[i]) max = P[i];
	cout << "陣列 P 的最大值是: " << max << endl; 
	cout << "直接將 P 輸出的結果是: " << P << endl;
	return 0; 
}
