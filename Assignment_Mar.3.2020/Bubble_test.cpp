#include "Bubble.hpp"
#include <cstdio>

using namespace std;

int main() {
	int num;
	scanf("%d", &num);
	float data[num];
	for (int i = 0; i < num; i++) {
		scanf("%f", &data[i]);
	}
	bubbleSort<float>(data, num);
	for (int i = 0; i < num; i++) {
		printf("%f ", data[i]);
	}
	return 0;
}