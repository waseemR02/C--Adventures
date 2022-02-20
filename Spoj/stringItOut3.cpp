#include <iostream>
#include <bits/stdc++.h>
// bool isSubsequence(std::string c, std::string d)
// {
//     int n = static_cast<int>(c.length());
//     int m = static_cast<int>(d.length());
    
//     for(int i{}; i < n; i++)
//         {
//             int mx = m;
//             for (int j = 0; j < m; j++)
//             {
//                 if (d[j] == c[i])
//                 {
//                     d.erase(d.begin() + j);
//                     m--;
//                     break;
//                 }
//             }
//             if (mx == m)
//             {
//                 return false;
//             }
                
//         }
//         return true;
// }
int main()
{
    int x{};
    std::cin >> x;

    std::string c;
    std::string d;

    while(std::cin >> c)
    {
        std::cin >> d;

        int n = static_cast<int>(c.length());
        int m = static_cast<int>(d.length());

        int M{};
        int p{m/n};

        for (int k = 0; k < p; k++)       
        {   int mx{m};
            for(int i{}; i < n; i++)
            {
                int mx = m;
                for (int j = 0; j < m; j++)
                {
                    if (d[j] == c[i])
                    {
                        d.erase(d.begin() + j);
                        m--;
                        break;
                    }
                }
                if (mx == m)
                {
                    // std::cout << M << std::endl;
                    break;
                }
                    
            }
            if(mx == m)
            break;
            M++;
        }
        std::cout << M << std::endl; 
    }    

}