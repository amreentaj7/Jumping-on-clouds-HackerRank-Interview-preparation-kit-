//Jumping on clouds

#include <iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> clouds(n);
    for(int i = 0;i < n;i++){
       cin >> clouds[i];
    }

    vector<int>counts(n , 100);
    counts[0] = 0;
    for (int i = 0; i < n; ++i) {
        if (clouds[i] == 1) continue;
        if (i + 1 < n && clouds[i + 1] == 0) {
            counts[i + 1] = min(counts[i + 1], counts[i] + 1);
        }
        if (i + 2 < n && clouds[i + 2] == 0) {
            counts[i + 2] = min(counts[i + 2], counts[i] + 1);
        }
    }

    cout << counts[n - 1] << endl;
    return 0;
}
