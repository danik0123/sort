// 10
template<typename T>
int quick_sort_count(vector<T>& v) {
    int count = 0;
    function<void(int,int)> qs = [&](int l,int r) {
        if(l >= r) return;
        count++;
        int p = partition_first(v,l,r);
        qs(l,p-1);
        qs(p+1,r);
    };
    qs(0,v.size()-1);
    return count;
}
