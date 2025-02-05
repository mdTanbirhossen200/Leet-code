#include<bits\stdc++.h>
using namespace std;

bool search(vector<vector<int>>&array,int x)
{
    int n = array.size(),m = array[0].size();

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(array[i][j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>>array={{1,2,3},{4,5,6},{7,8,9}};

    if(search(array,70))
    cout<<"Find:";

    else
    cout<<"Not find:";

    return 0;

}