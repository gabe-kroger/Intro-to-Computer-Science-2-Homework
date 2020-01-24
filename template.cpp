#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename type>
bool is_ascending(vector<type> arr) //arr is short for array
{
    int i = 1;
    int length = arr.size(); // length of vector
    bool answer = true;

  for_each(arr.begin(), arr.end(), [&](type ele){
    if(i< length) if(ele > arr[i]) answer = false; i++;   //function definition
});

    return answer;
}

template<typename type>
bool is_member(vector<type> arr, type check)
{
    int length = arr.size();
    bool answer = false;

    for_each(arr.begin(), arr.end(), [&](type ele) {
             if (ele == check) answer = true;
        });
        return answer;

}




int main()
{

    vector<int>numbers{1,2,3,4,5};
    vector<int>nums{5,4,3,2,1};

    bool ascending = is_ascending(nums);
    bool member = is_member(numbers, 4);

    if(member) {
        cout << "true" <<endl;
    }
    else {
        cout << "false" << endl;
    }
    if(ascending) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }




    return 0;
}
