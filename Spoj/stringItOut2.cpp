#include <iostream>

/*bool isSequence(std::string c, std::string d)
{
    int n = static_cast<int>(c.length());
    int m = static_cast<int>(d.length());

    for(int i{}; i < n; i++)
        {
            int mx = m;
            for (int j = 0; j < mx; j++)
            {
                if (d[j] == c[i])
                {
                    d.erase(d.begin() + j);
                    mx--;
                    break;
                }
                else break;
                
            }
            if (m == mx)
            {
                return false;
            }
            
        }
    return true;    
}*/

std::string deletestr(std::string c, std::string d)
{
    int n = static_cast<int>(c.length());
    int m = static_cast<int>(d.length());

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
                return "0";
            }
            
        }
    return d;
}

bool isSequence(std::string d)
{
    if(d == "0")
        return false;
    else 
    return true;
}

int main()
{
    int x{};
    std::cin >> x;

    std::string c;

    while(std::cin >> c)
        {
            std::string d;
            std::cin >> d;

            int M{};
            while
            (isSequence(deletestr(c, d)))
            
            {
                d = deletestr(c, d);
                M++;
            }

            std::cout << M << std::endl;
        }
}