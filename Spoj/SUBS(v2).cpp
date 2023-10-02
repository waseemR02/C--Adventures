#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string c;
        string d;

        cin >> c >> d;

        size_t n{c.length()};
        size_t m{d.length()};

        int M{};

        for (size_t i = 0; i < m/n; i++)
        {
            int index{};
            for (size_t i = 0; i < n; i++)
            {
                if (d.find(c[i], (d.find(c[i], index) + M)) != -1)
                {
                    index = d.find(c[i], (d.find(c[i], index) + M));
                }
                else
                {index = 0;
                break;}
            }
            if (index != 0)
            {
                M++;
            }
        }
        cout << M << endl;
    }

    return 0;
}