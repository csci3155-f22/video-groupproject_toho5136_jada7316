#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int square_plus_one(int n){
    return n*n+1;
}

bool is_odd(int n){
    return n%2==1;
}

int main(){
    //compile w g++ -o prog examples.cpp
    //          ./prog
    
    vector<int> nums{1,2,3,4,5,6,7,8,9};
    
    cout<<"Before any functions:";
    for(vector<int>::iterator i=nums.begin();i!=nums.end();i++){
        cout<<" "<<*i<<" ";
    }
    cout<<endl;
    
    //applies square_plus_one to nums and sets it to transform
    transform(nums.begin(),nums.end(),nums.begin(),square_plus_one);
    
    //prints [2,5,10,17,26,37,50,65,82]
    cout<<"After transform:";
    for(vector<int>::iterator i=nums.begin();i!=nums.end();i++){
        cout<<" "<<*i<<" ";
    }
    cout<<endl;
    
    //vector to array for second example
    int nums_arr[9];
    copy(nums.begin(),nums.end(),nums_arr);
    int* first=nums_arr;
    int* last=nums_arr+sizeof(nums_arr)/sizeof(int);
    
    
    //applies is_odd to num_arr and returns the last location that is_odd returns false
    last=remove_if(first,last,is_odd);
    
    //prints [2,10,26,50,82]
    cout<<"After remove_if:";
    for(int* i=first;i!=last;i++){
        cout<<" "<<*i<<" ";
    }
    cout<<endl;
    
    return 0;
}
//code references: 
    //https://cplusplus.com/reference/algorithm/remove_if/
    //https://www.modernescpp.com/index.php/higher-order-functions
