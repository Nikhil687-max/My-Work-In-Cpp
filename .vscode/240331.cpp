#include <bits/stdc++.h>
using namespace std;




void fun(string x){
    int n = sizeof(x)/sizeof(char);
    if(n == 0)cout << "[  ,";
    int y = x[n-1];
    x.pop_back();
    fun(x);
    cout << y <<", ";
    for(int i = 0;i < n-1;i++){
        cout << x[i] << y << ", ";
    }

}

int main ()
{

    string s;
    cin >> s;
    s += "ddddddddddddddd";
    s.pop_back();
    s.erase();
    cout << s;
    fun(s);
    cout << " ]";
    










vector<int> nums;
int n = nums.size();
int count = 0;
        for(int i = 0;i < n-1;i++)
        {
            
            
            int co = 0;
            int k = 1;
            int mai = 0;
            int maj = 0;
            int ma2 = 0;
            for(int j = 0;j < n-1;j++)
            {
                
                
                if(k == 1 && nums.at(j) < nums.at(j+1)){
                    co++;
                    if(co > mai){
                        mai = co;
                    }
                }
                else if(k != -1){k = -1;j--;ma2 = mai;co = 0;mai = 0;}
                else if(k == 1 && nums.at(j) > nums.at(j+1)){
                    co++;
                    if(co > mai){
                        mai = co;
                    }
                }
                if(mai > ma2){}
                
            }
            
            if(nums.at(i) < nums.at(i+1) && nums.at(i+2) < nums.at(i+1) && nums.at(i+2) > nums.at(i)+2)
            {
                nums.at(i+1) = nums.at(i)+1;
                count = count + 1;
            }
            else if(nums.at(i) < nums.at(i+1)){}
            else{
                nums.at(i+1) = nums.at(i)+1;
                count = count + 1;
            }
            
        }
        return count;
}