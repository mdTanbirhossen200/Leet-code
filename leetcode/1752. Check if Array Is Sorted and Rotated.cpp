#include<bits\stdc++.h>
using namespace std;

bool cheack(vector<int>&array)
{
    int n = array.size();
    int count = 0;

    for(int i = 0; i<array.size(); i++)
    {
        if(array[i] > array[(i + 1) % n])
        count++;
    }
    return count <= 1;
}

int main()
{
    vector<int>array = {2,1,3,4};
    cout<<(cheack(array) ? "yes" : "no");
    return 0;
}