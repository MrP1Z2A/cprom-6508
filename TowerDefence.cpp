#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int dfk()
{
    const double TOWER_X = 4, TOWER_Y = 7, ATTACK_RANGE = 8; //declare constants

    //1. Declare variables
    double enemyX, enemyY, distance, attack_value, dxSqu, dySqu;

    //2. Input data
    cout << "Enter the enemy X coordinates:";
    cin >> enemyX;
    cout << "Enter the enemy Y coordinates:";
    cin >> enemyY;

    //3. Compute
    dxSqu = pow(TOWER_X - enemyX,2);
    dySqu = pow(TOWER_Y - enemyY, 2);
    distance = sqrt(dxSqu + dySqu);
    attack_value = ATTACK_RANGE - distance;

    //4. output results		Tower attack range //Distance of Tower to enemy //Attack value (>= 0 Tower will auto attack)
    cout << left
         << setw(30) << "Tower attack range"
         << setw(30) << "Distance of Tower to Enemy"
         << "Attack value (>=0 Tower will auto attack)"<< endl ;

    cout << fixed << setprecision(2);

    cout << setw(30) << ATTACK_RANGE
         << setw(30) << distance
         << attack_value << endl;

    return 0;
}