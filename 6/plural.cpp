#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#define NDEBUG

using namespace std;

void printvec(const vector<int>::iterator beg, const vector<int>::iterator  end) { 
    if (beg == end) {
        return;
    }
#ifndef NDEBUG
    cout << "we are at function " << __func__ << " at " << *beg << endl;
    cout << "at line " << __LINE__ << endl;
#endif
    cout << *beg << endl;
    printvec(beg+1, end);
}

int main() {
    vector<int> vecints = {1,2,3,4,5};
    // assert(vecints.size() < threshold);      //debugging
    printvec(begin(vecints),end(vecints));

    return 0;
}

/*
   string make_plural(size_t ctr, const string &word, const string &ending = "s") {
   return (ctr > 1) ? word + ending:word;
   }

   int main() {
   string word1("success");
   size_t length = sizeof(word1);
   string final = make_plural(length, word1, "es");
   cout << final << endl;

   return 0;
   }
   */


