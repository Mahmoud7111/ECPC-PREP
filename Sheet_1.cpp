////A - Vlad and the Best of Five
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        string s;
//        cin >> s;
//
//		int count[2] = { 0, 0 }; // [0] for '0's and [1] for '1's
//
//		for (char c : s) {
//			count[c - 'A']++; /// c - 'A' will give 0 for 'A' and 1 for 'B'
//		}
//
//		if (count[0] > count[1])
//			cout << "A" << endl;
//		else 
//			cout << "B" << endl;
//
//    }
//    return 0;
//}



////B - Increasing
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//    int t;
//    cin >> t;
//
//    while (t > 0) {
//        int n;
//        cin >> n;
//
//        int a[100];
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//        }
//
//        sort(a, a + n);
//
//		bool isIncreasing = true;
//		for (int i = 1; i < n; i++) {
//
//			if (a[i] <= a[i - 1]) 
//				isIncreasing = false;
//			
//		}
//
//		if (isIncreasing) 
//			cout << "YES" << endl;
//		
//		else 
//			cout << "NO" << endl;
//		
//      t = t - 1;
//    }
//
//    return 0;
//}

////C - Thorns and Coins
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t > 0) {
//        int n;
//        cin >> n;
//
//        string s;
//        cin >> s;
//
//        int coins = 0;
//
//        for (int i = 0; i < n; i++) {
//			if (s[i] == '*' && s[i + 1] == '*' && i + 1 < n) { // i + 1 < n 3ashan ma ykhrgsh mn el array
//                break;
//            }
//            if (s[i] == '@') {
//                coins = coins + 1;
//            }
//        }
//
//        cout << coins << endl;
//
//        t = t - 1;
//    }
//
//    return 0;
//}


////D - Dragons
//#include <iostream>
//using namespace std;
//
//int main() {
//    int s, n;
//    cin >> s >> n;
//
//    int x[1000], y[1000];
//    for (int i = 0; i < n; i++) {
//        cin >> x[i] >> y[i];
//    }
//
//	for (int round = 0; round < n; round++) { // repeat n times to ensure all dragons can be defeated, 3ashan kirito may got bonus 
//		for (int i = 0; i < n; i++) { // iterate through all dragons
//            if (x[i] != -1 && s > x[i]) {
//                s = s + y[i]; // bonus
//                x[i] = -1;   // mark as defeated
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (x[i] != -1) {
//            cout << "NO" << endl;
//            return 0;
//        }
//    }
//
//    cout << "YES" << endl;
//    return 0;
//}


//

/// I - Doremy's Paint 3
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;

        int first = 0;    // first number we see
        int second = 0;   // a different number (0 = none yet)
        int cnt1 = 0;     // how many times first appears
        int cnt2 = 0;     // how many times second appears
        bool ok = true;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (first == 0 || x == first) { 
                first = x;
                cnt1 = cnt1 + 1;
            }
            else if (second == 0 || x == second) {
                second = x;
                cnt2 = cnt2 + 1;
            }
            else {
                ok = false; // third different number
            }
        }

        if (ok && second != 0) { 
            int diff = cnt1 - cnt2; // How far apart are the two counts?

            if (diff < 0) 
                diff = -diff;   // make it positive
            if (diff > 1)     // they can’t take turns 
                ok = false;
        }

        if (ok) cout << "Yes" << endl;
        else cout << "No" << endl;

        t = t - 1;
    }

    return 0;
}