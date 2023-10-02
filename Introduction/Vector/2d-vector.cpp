#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,q;
    scanf("%d %d", &n,&q);

    vector<vector<int>> mainarray;

    size_t i{};

    for ( i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        vector<int> vec1;
        for (size_t j = 0; j < m; j++)
        {
            int num;cin >> num; 
            vec1.push_back(num);
        }

        mainarray.push_back(vec1);
    }
    for (size_t k = 0; k < q; k++)
    {
        int index1,index2;
        cin >> index1 >> index2;

        cout << mainarray[index1][index2] << endl;
    }

    return 0;
}

// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen