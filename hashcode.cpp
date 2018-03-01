#include<fstream>
#include<algorithm>
#include<cmath>
using namespace std;
ifstream cin("d_metropolis.in");
ofstream cout("d.out");

struct ride{
    int    start_x,  start_y;
    int      end_x,    end_y;
    int start_time, end_time;
    int original_id;
};

bool compare(ride x, ride y)
{
    int dist_x = abs(x.start_x - x.end_x) + abs(x.start_y - x.end_y);
    int dist_y = abs(y.start_x - y.end_x) + abs(y.start_y - y.end_y);
    return x.start_time < y.start_time;
}

int main()
{
    int rows, columns, noOfVehicles, rides, bonus, steps;
    ride r[10001];
    cin>>rows>>columns>>noOfVehicles>>rides>>bonus>>steps;
    for(int i = 0; i < rides; i++)
    {
        cin>>r[i].start_x>>r[i].end_x>>r[i].start_y>>r[i].end_y>>r[i].start_time>>r[i].end_time;
        r[i].original_id = i;
    }
    sort(r, r + rides, compare);
    for(int i = 0; i < noOfVehicles; i++)
    {
        cout<<"123 "<<r[i].original_id<<" "<<r[min(i + noOfVehicles, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 2, rides)].original_id<<" "<<r[min(i + noOfVehicles * 3, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 4, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 5, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 6, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 7, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 8, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 9, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 10, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 11, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 12, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 13, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 14, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 15, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 16, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 17, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 18, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 19, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 20, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 21, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 22, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 23, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 24, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 25, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 26, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 27, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 28, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 29, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 30, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 31, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 32, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 33, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 34, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 35, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 36, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 37, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 38, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 39, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 40, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 41, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 42, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 43, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 44, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 45, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 46, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 47, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 48, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 49, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 50, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 51, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 52, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 53, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 54, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 55, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 56, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 57, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 58, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 59, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 60, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 61, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 62, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 63, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 64, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 65, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 66, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 67, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 68, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 69, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 70, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 71, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 72, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 73, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 74, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 75, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 76, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 77, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 78, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 79, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 80, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 81, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 82, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 83, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 84, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 85, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 86, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 87, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 88, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 89, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 90, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 91, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 92, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 93, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 94, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 95, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 96, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 97, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 98, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 99, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 100, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 101, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 102, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 103, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 104, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 105, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 106, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 107, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 108, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 109, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 110, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 111, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 112, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 113, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 114, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 115, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 116, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 117, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 118, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 119, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 120, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 121, rides)].original_id;
        cout<<" "<<r[min(i + noOfVehicles * 122, rides)].original_id<<"\n";
    }
}
