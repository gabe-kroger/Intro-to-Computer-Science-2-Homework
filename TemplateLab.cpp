#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Student {int field1; double field2;};

template <typename type>
int member_check(vector<type> arr, type check){

    int pos = 0;
    int answer = -1;

    for_each(arr.begin(), arr.end(), [&](type ele){
    if(ele == check) {
            answer = pos;
            return;
         }
         pos++;
        });

    return answer;
}

template<typename Type>
void copy(Type &arr1, Type & arr2, int n) {
    for (int i = 0; i < n; i++) {
        arr1[i] = arr2[i];
    }
    return;
}
//operator overloading
ostream& operator <<(ostream& out, Student& obj) {
    out << obj.field1 << ", " << obj.field2;
    return out;
    }

int main()
{
    vector<int> numbers{1,1,1,1,2,1,1};
   cout << member_check(numbers, 2) << endl;

   Student aStudent[3];
   Student bStudent[3] = { {2,4}, {4,6}, {6,8} };

   cout << "The function copies elements from bStudent to aStudent." << endl;
   copy(aStudent, bStudent, 3);

   for (int i = 0; i < 3; i++){
    cout << aStudent[i] << endl;
   }



    return 0;
}
