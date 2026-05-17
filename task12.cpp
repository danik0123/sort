// 12
template<typename T>
void partition_3way(vector<T>& v, int low, int high, int& lt, int& gt) {
    T pivot = v[low];
    lt = low; gt = high;
    int i = low+1;
    while(i <= gt) {
        if(v[i] < pivot) { swap(v[lt], v[i]); lt++; i++; }
        else if(v[i] > pivot) { swap(v[i], v[gt]); gt--; }
        else i++;
    }
}
