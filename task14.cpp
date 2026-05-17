// 14
template<typename T>
int count_inversions(vector<T>& v) {
    if(v.size() < 2) return 0;
    int mid = v.size()/2;
    vector<T> left(v.begin(),v.begin()+mid), right(v.begin()+mid,v.end());
    int inv = count_inversions(left) + count_inversions(right);
    int i = 0, j = 0;
    vector<T> temp;
    while(i < left.size() && j < right.size()) {
        if(left[i] <= right[j]) temp.push_back(left[i++]);
        else { temp.push_back(right[j++]); inv += left.size()-i; }
    }
    while(i < left.size()) temp.push_back(left[i++]);
    while(j < right.size()) temp.push_back(right[j++]);
    v = temp;
    return inv;
}
