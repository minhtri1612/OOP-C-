#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<"phan tu cuoi cung:"<<v[v.size()-1]<<endl;
    cout<<"phan tu cuoi cung:"<<v.back()<<endl;

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    cout<<"vi tri index thu 2:"<<v[2]<<endl;
    cout<<"vi tri index thu 2:"<<*(v.begin()+2)<<endl;

    int n;
    cout<<"nhap so n:";
    cin>>n;

    vector<int>vec(8,10);//so 4 la capacity
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    v.insert(v.begin(),77);
    cout<<v[0];
    
}
