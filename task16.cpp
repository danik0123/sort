// 16
template<typename T>
void natural_merge_sort(vector<T>& v) {
    int n = v.size();
    vector<vector<T>> runs;
    for(int i = 0; i < n; ) {
        int j = i+1;
        while(j < n && v[j-1] <= v[j]) j++;
        runs.push_back(vector<T>(v.begin()+i, v.begin()+j));
        i = j;
    }
    while(runs.size() > 1) {
        vector<vector<T>> new_runs;
        for(int i = 0; i < runs.size(); i += 2) {
            if(i+1 < runs.size()) new_runs.push_back(merge_vectors(runs[i], runs[i+1]));
            else new_runs.push_back(runs[i]);
        }
        runs = new_runs;
    }
    if(!runs.empty()) v = runs[0];
}
