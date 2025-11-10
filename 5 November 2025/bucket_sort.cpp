#include <iostream>
using namespace std;

void insertionSort(float bucket[], int n) {
    for(int i = 1; i < n; i++) {
        float key = bucket[i];
        int j = i - 1;
        while(j >= 0 && bucket[j] < key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    const int bucketCount = 10;
    float buckets[bucketCount][bucketCount];
    int bucketSizes[bucketCount] = {0};

    for(int i = 0; i < n; i++) {
        int bucketIndex = int(arr[i] * bucketCount);
        buckets[bucketIndex][bucketSizes[bucketIndex]] = arr[i];
        bucketSizes[bucketIndex]++;
    }

    int idx = 0;
    for(int i = bucketCount - 1; i >= 0; i--) {
        if(bucketSizes[i] > 0) {
            insertionSort(buckets[i], bucketSizes[i]);
            for(int j = 0; j < bucketSizes[i]; j++)
                arr[idx++] = buckets[i][j];
        }
    }
}

int main() {
    int n;
    cin >> n;

    float arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bucketSort(arr, n);

    cout << "Array yang sudah di-sorting: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}