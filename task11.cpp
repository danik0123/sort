// 11
template<typename T>
T quick_select(vector<T>& v, int k) {
    int l = 0, r = v.size()-1;
    while(true) {
        int p = partition_first(v,l,r);
        if(p == k) return v[p];
        else if(k < p) r = p-1;
        else l = p+1;
    }
}
