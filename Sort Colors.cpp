class Solution {
public:
    void sortColors(vector<int>& n) {
    int l = 0, r = n.size() - 1, i = 0;
    while (i <= r) {
        if (n[i] == 0) swap(n[i++], n[l++]);
        else if (n[i] == 2) swap(n[i], n[r--]);
        else i++;
    }
 }

};