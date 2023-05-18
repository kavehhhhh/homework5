#include <iostream>
#include <vector>
#include <chrono>
#include <random>

using namespace std;

// …˙≥…ÀÊª˙–Ú¡–
vector<int> generateRandomSequence(int n) {
    vector<int> seq(n);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, n);

    for (int i = 0; i < n; i++) {
        seq[i] = dis(gen);
    }

    return seq;
}

// …˙≥…ƒÊ–Ú–Ú¡–
vector<int> generateReverseSequence(int n) {
    vector<int> seq(n);

    for (int i = 0; i < n; i++) {
        seq[i] = n - i;
    }

    return seq;
}

// √∞≈›≈≈–Ú
void bubbleSort(vector<int>& seq) {
    int n = seq.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (seq[j] > seq[j + 1]) {
                swap(seq[j], seq[j + 1]);
            }
        }
    }
}

// ≤Â»Î≈≈–Ú
void insertionSort(vector<int>& seq) {
    int n = seq.size();

    for (int i = 1; i < n; i++) {
        int key = seq[i];
        int j = i - 1;

        while (j >= 0 && seq[j] > key) {
            seq[j + 1] = seq[j];
            j--;
        }

        seq[j + 1] = key;
    }
}

// —°‘Ò≈≈–Ú
void selectionSort(vector<int>& seq) {
    int n = seq.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (seq[j] < seq[minIndex]) {
                minIndex = j;
            }
        }

        swap(seq[i], seq[minIndex]);
    }
}

// πÈ≤¢≈≈–Ú
void merge(vector<int>& seq, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = seq[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = seq[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            seq[k] = L[i];
            i++;
        }
        else {
            seq[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        seq[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        seq[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& seq, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;
    mergeSort(seq, left, mid);
    mergeSort(seq, mid + 1, right);
    merge(seq, left, mid, right);
}

// øÏÀŸ≈≈–Ú
int partition(vector<int>& seq, int left, int right) {
    int pivot = seq[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (seq[j] < pivot) {
            i++;
            swap(seq[i], seq[j]);
        }
    }

    swap(seq[i + 1], seq[right]);
    return i + 1;
}

void quickSort(vector<int>& seq, int left, int right) {
    if (left >= right) {
        return;
    }

    int p = partition(seq, left, right);
    quickSort(seq, left, p - 1);
    quickSort(seq, p + 1, right);
}

// ∂—≈≈–Ú
void heapify(vector<int>& seq, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && seq[l] > seq[largest]) {
        largest = l;
    }

    if (r < n && seq[r] > seq[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(seq[i], seq[largest]);
        heapify(seq, n, largest);
    }
}

void heapSort(vector<int>& seq) {
    int n = seq.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(seq, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(seq[0], seq[i]);
        heapify(seq, i, 0);
    }
}

int main() {
    int n = 10000;
    vector<int> seq = generateRandomSequence(n);
    vector<int> seqReverse = generateReverseSequence(n);



