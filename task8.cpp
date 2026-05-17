// 8
template<typename T>
void binary_insertion_sort(vector<T>& v) {
    int n = v.size();
    for(int i = 1; i < n; i++) {
        T key = v[i];
        int left = 0, right = i;
        while(left < right) {
            int mid = (left + right)/2;
            if(v[mid] <= key) left = mid+1;
            else right = mid;
        }
        for(int j = i; j > left; j--) v[j] = v[j-1];
        v[left] = key;
    }
}
