# homework5

测试代码无法运行，显示有未处理的异常

// 测试起泡排序
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(seq);
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Bubble sort on random sequence: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    bubbleSort(seqReverse);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Bubble sort on reverse sequence: " << duration.count() << " microseconds" << endl;

    // 测试插入排序
    seq = generateRandomSequence(n);
    seqReverse = generateReverseSequence(n);

    start = chrono::high_resolution_clock::now();
    insertionSort(seq);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Insertion sort on random sequence: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    insertionSort(seqReverse);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Insertion sort on reverse sequence: " << duration.count() << " microseconds" << endl;

   // 测试选择排序
    seq = generateRandomSequence(n);
    seqReverse = generateReverseSequence(n);

    start = chrono::high_resolution_clock::now();
    selectionSort(seq);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Selection sort on random sequence: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    selectionSort(seqReverse);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Selection sort on reverse sequence: " << duration.count() << " microseconds" << endl;

    // 测试归并排序
    seq = generateRandomSequence(n);
    seqReverse = generateReverseSequence(n);

    start = chrono::high_resolution_clock::now();
    mergeSort(seq, 0, n - 1);
    stop =chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Merge sort on random sequence: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    mergeSort(seqReverse, 0, n - 1);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Merge sort on reverse sequence: " << duration.count() << " microseconds" << endl;

    // 测试快速排序
    seq = generateRandomSequence(n);
    seqReverse = generateReverseSequence(n);

    start = chrono::high_resolution_clock::now();
    quickSort(seq, 0, n - 1);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Quick sort on random sequence: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    quickSort(seqReverse, 0, n - 1);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Quick sort on reverse sequence: " << duration.count() << " microseconds" << endl;

    // 测试堆排序
    seq = generateRandomSequence(n);
    seqReverse = generateReverseSequence(n);

    start = chrono::high_resolution_clock::now();
    heapSort(seq);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Heap sort on random sequence: " << duration.count() << " microseconds" << endl;

    start = chrono::high_resolution_clock::now();
    heapSort(seqReverse);
    stop = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "Heap sort on reverse sequence: " << duration.count() << " microseconds" << endl;

    return 0;
}
