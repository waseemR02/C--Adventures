#include <iostream>


double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";

    double height{};
    std::cin >> height;

    return height;
}

void realtimeHeight(int t, double h)
{
    constexpr double gravity_constant{9.8};
    double distanceFallen{(gravity_constant*t*t)/2.0};

    if(h <= distanceFallen)
        std::cout << "At " << t << " seconds, the ball is on the ground.\n" ;
    else
        std::cout << "At " << t << " seconds, the ball is at height: " << h-distanceFallen << " meters\n";
    
}

int main()
{   
    double h{getHeight()};

    for(int i{}; i < 6; i++)
        realtimeHeight(i, h);

    return 0;
}