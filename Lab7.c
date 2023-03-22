#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* pData, int n)
{
    int numSwaps;
	for(int i = 0; i< n -1; i++){
        numSwaps = 0;
		for(int j = 0; j < n - i -1; j++) {
			if(pData[j] > pData[j + 1]){
				int temp = pData[j];
				pData[j] = pData[j + 1];
				pData[j + 1] = temp;
                numSwaps++;
			}
		}
        printf("Pass %d: %d\n", (i+1), numSwaps);
	}

}

int main(){
    int pData [] = {97, 16, 45, 63, 13, 22, 7, 50, 72};
    bubbleSort(pData, 9);
}