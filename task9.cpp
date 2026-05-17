// 9
template<typename T>
int partition_first(vector<T>& v, int low, int high) {
    T pivot = v[low]; int i = low+1, j = high;
    while(true) {
        while(i <= j && v[i] <= pivot) i++;
        while(i <= j && v[j] > pivot) j--;
        if(i >= j) break;
        swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}
