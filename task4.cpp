template<typename T>
bool is_sorted(vector<T>& v) {
    for(int i = 1; i < v.size(); i++)
        if(v[i-1] > v[i]) return false;
    return true;
}
