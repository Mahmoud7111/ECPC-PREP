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


////
//
///// I - Doremy's Paint 3
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
//        int first = 0;      // first number we see
//        int second = 0;    // a different number (0 = none yet)
//        int cnt1 = 0;     // how many times first appears
//        int cnt2 = 0;     // how many times second appears
//        bool ok = true;
//
//        for (int i = 0; i < n; i++) {
//            int x;
//            cin >> x;
//
//            if (first == 0 || x == first) { 
//                first = x;
//                cnt1 = cnt1 + 1;
//            }
//            else if (second == 0 || x == second) {
//                second = x;
//                cnt2 = cnt2 + 1;
//            }
//            else {
//                ok = false; // third different number
//            }
//        }
//
//        if (ok && second != 0) { 
//            int diff = cnt1 - cnt2; // How far apart are the two counts?
//
//            if (diff < 0) 
//                diff = -diff;   // make it positive
//            if (diff > 1)     // they can’t take turns 
//                ok = false;
//        }
//
//        if (ok) 
//            cout << "Yes" << endl;
//        else 
//            cout << "No" << endl;
//
//        t = t - 1;
//    }
//
//    return 0;
//}


////F - Same Differences
//#include <iostream>
//#include <vector>
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
//		vector<int> freq(2 * n + 1, 0); // array to count frequencies of b values, size is 2n + 1 to accommodate negative indices
//        long long pairs = 0;
//
//        for (int i = 1; i <= n; i++) {
//            int a;
//            cin >> a;
//
//            int b = a - i + n;   // + n so the index is never negative
//
//            pairs = pairs + freq[b];   // pair with every earlier equal b
//			freq[b] = freq[b] + 1;  // increment the count of this b value
//        }
//
//        cout << pairs << endl;
//
//        t = t - 1;
//    }
//
//    return 0;
//}


//
////G - Same Parity Summands
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t > 0) {
//        int n, k;
//        cin >> n >> k;
//
//        int lastOdd = n - (k - 1);       // k-1 ones, rest in last
//        int lastEven = n - 2 * (k - 1);  // k-1 twos, rest in last
//
//        if (lastOdd > 0 && lastOdd % 2 == 1) {
//            cout << "YES" << endl;
//            for (int i = 0; i < k - 1; i++) {
//                cout << 1 << " ";
//            }
//            cout << lastOdd << endl;
//        }
//        else if (lastEven > 0 && lastEven % 2 == 0) {
//            cout << "YES" << endl;
//            for (int i = 0; i < k - 1; i++) {
//                cout << 2 << " ";
//            }
//            cout << lastEven << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//
//        t = t - 1;
//    }
//
//    return 0;
//}


//
////H - Construct the String
//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t > 0) {
//        int n, a, b;
//        cin >> n >> a >> b;
//
//        for (int i = 0; i < n; i++) {
//			cout << char('a' + i % b); // cycle through the first b letters of the alphabet
//        }
//        cout << endl;
//
//        t = t - 1;
//    }
//
//    return 0;
//}


////J - Twin Permutations
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
//        for (int i = 0; i < n; i++) {
//            int a;
//            cin >> a;
//			cout << n + 1 - a << " "; // output the twin permutation
//        }
//        cout << endl;
//
//        t = t - 1;
//    }
//
//    return 0;
//}


//////K - Regular Bracket Sequence
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t > 0) {
//        string s;
//        cin >> s;
//
//        int n = s.size();
//
//		if (n % 2 == 0 && s[0] != ')' && s[n - 1] != '(') { // check if the length is even and the first character is not ')' and the last character is not '('
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//
//        t = t - 1;
//    }
//
//    return 0;
//}

////L - Reverse Binary Strings
//#include <iostream>
//#include <string>
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
//        int zeros = 0;   // count of "00"
//        int ones = 0;    // count of "11"
//
//        for (int i = 0; i + 1 < n; i++) {
//            if (s[i] == '0' && s[i + 1] == '0') { 
//                zeros = zeros + 1;
//            }
//            if (s[i] == '1' && s[i + 1] == '1') {
//                ones = ones + 1;
//            }
//        }
//
//        if (zeros > ones) {
//            cout << zeros << endl;
//        }
//        else {
//            cout << ones << endl;
//        }
//
//        t = t - 1;
//    }
//
//    return 0;
//}
