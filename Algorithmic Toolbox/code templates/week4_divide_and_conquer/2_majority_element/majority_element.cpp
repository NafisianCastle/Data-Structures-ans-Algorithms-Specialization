<<<<<<< HEAD
#include<bits/stdc++.h>
=======
#include<bits/stdc++.h>
>>>>>>> 41b8f92f3a46828fb0f1a61a96c2446049322ce7
using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
<<<<<<< HEAD
  //write your code here
    int left_elem = get_majority_element(a, left, (left + right - 1) / 2 + 1);
    int right_elem = get_majority_element(a, (left + right - 1) / 2 + 1, right);

    int lcount = 0;
    for (int i = left; i < right; i++) {
        if (a[i] == left_elem) lcount += 1;
    }
    if (lcount > (right - left) / 2) return left_elem;

    int rcount = 0;
    for (int i = left; i < right; i++) {
        if (a[i] == right_elem) rcount += 1;
    }
=======
  //write your code here
    int left_elem = get_majority_element(a, left, (left + right - 1) / 2 + 1);
    int right_elem = get_majority_element(a, (left + right - 1) / 2 + 1, right);

    int lcount = 0;
    for (int i = left; i < right; i++) {
        if (a[i] == left_elem) lcount += 1;
    }
    if (lcount > (right - left) / 2) return left_elem;

    int rcount = 0;
    for (int i = left; i < right; i++) {
        if (a[i] == right_elem) rcount += 1;
    }
>>>>>>> 41b8f92f3a46828fb0f1a61a96c2446049322ce7
    if (rcount > (right - left) / 2) return right_elem;
  return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
