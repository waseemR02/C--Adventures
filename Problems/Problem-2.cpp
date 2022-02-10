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

// Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

// Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2
