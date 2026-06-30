//
// Created by asus on 6/26/2026.
//

#include <bits/stdc++.h> // GCC-only "mega-header" that pulls in every standard C++ library (<iostream>, <vector>, <string>, <algorithm>, etc.) in one g
using namespace std;
typedef long long ll;
#define  endl "\n" // Replaces endl with "\n". endl is slow because it also flushes the buffer. Using "\n" is faster.
#define int ll // Replaces every int with long long. This is a lazy CP hack to avoid integer overflow. But it forces signed main() because main() can't return long long.
// ------------------------------------

const int N = 1e6 + 1; // 1e6 is 1 × 10⁶ = 1,000,000.  ||  So: N = 1,000,001
int memo[N];

int fib(int x) {
    if (x <= 1) return x;

    if (memo[x] != -1)
        return memo[x];

    int answer = fib(x - 1) + fib(x - 2);
    memo[x] = answer;

    return answer;
}

void magic() {
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo)); // Fills the entire memo array with -1. This works because -in binary is all 1s, so every byte gets set to 0xFF. This is used to mark "uncomputed" values before applying memoization.
    cout << fib(n) << endl;
}

/*
 *
  signed is a synonym for int. This code earlier does:
  #define int ll
  which replaces every int in the code with long long. Since
  main() must return int (it's a C++ rule), they write
  signed main() to avoid the macro replacing it with long
  long main().
 *
*/
signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    while (t--) magic();
}
/*
* Three speed三件組 (speed combo):
  1. sync_with_stdio(false) — Stops syncing cin/cout with
  C's scanf/printf. Makes I/O much faster.
  2. cin.tie(nullptr) — Unties cin from cout. Normally every
  cin flushes cout; this disables that.
  3. cout.tie(nullptr) — Same idea but the other way.

  ▎ These three together are the CP standard for fast I/O.
  ▎ Without them, cin/cout can be too slow for problems with
  ▎ millions of inputs.
 */

/*
*  5. while (t--) magic();

  int t = 1;        // number of test cases
  while (t--) magic();
  - t = 1 (from int t = 1;) means the loop runs once.
  - In CP, t is usually read from input (e.g., cin >> t;),
  allowing multiple test cases. Defaulting to 1 makes it run
  once if the problem has no multiple-test-case format.

  The -- is the postfix decrement — it uses t's current
  value (1) to check the condition, then decrements it to 0.
  So the loop body (magic()) runs once, then t becomes 0
  and the loop stops.
 */


/*Summary Table

  Trick: bits/stdc++.h
  What it does: Includes everything
  Real-world advice: ❌  Don't use in real projects
  ────────────────────────────────────────
  Trick: 1e6
  What it does: Scientific notation for 1000000
  Real-world advice: ✅ Fine everywhere
  ────────────────────────────────────────
  Trick: ios_base::sync_with_stdio(false)
  What it does: Speeds up I/O 10x
  Real-world advice: ✅ Use in CP, fine elsewhere
────────────────────────────────────────
Trick: omeside.sync...)
What it does:
Real-world advice:
────────────────────────────────────────
Trick: signed main()
What it does: Works around #define int ll
Real-world advice: ❌ CP-only hack
────────────────────────────────────────
Trick: memset(m纠纷案件 to -1)
What it does: Bulk-initializes array to -1
Real-world advice: ✅ Standard, but only safe for 0 or -1
────────────────────────────────────────
Trick: #define int ll
What it does: Forces 64-bit integers everywhere
Real-world adving in real────────────────────────────────────────
Trick: omeside.sync...)
What it does:
Real-world advice:
────────────────────────────────────────
Trick: signed main()
What it does: Works around #define int ll
Real-world advice: ❌ CP-only hack
────────────────────────────────────────
Trick: memset(m纠纷案件 to -1)
What it does: Bulk-initializes array to -1
Real-world advice: ✅ Standard, but only safe for 0 or -1
────────────────────────────────────────
Trick: #define int ll
What it does: Forces 64-bit integers everywhere
Real-world adving in real code
────────────────────────────────────────
  Trick: while (t--) magic()
  What it does: Run magic() t times
  Real-world advice: ✅ Clever and common inn CP

---
workflow
  Since this code is clearly written for competitive
  programming (fast I/O, macros, single-file), just keep
  doing what you're doing — run g++ "DP
  (RECURSIVE)/fibonacci-recursive.cpp" -o "DP
  (RECURSIVE)/fibonacci-recursive" and execute.


*/