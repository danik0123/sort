template<typename T>
int bubble_sort_count(vector<T>& v) {
    int n = v.size(), swaps = 0;
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(v[j] > v[j+1]) { swap(v[j], v[j+1]); swaps++; }
    return swaps;
}
