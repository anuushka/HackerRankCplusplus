#scheduling interval or activity selection problem (Greedy algorithm: https://www.geeksforgeeks.org/activity-selection-problem-greedy-algo-1/)
#include<bits/stdc++.h>
using namespace std;

struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    vector<Workshop> workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* aw = new Available_Workshops;
    aw->n = n;
    for(int i = 0; i < n; i++) {
        Workshop w_;
        w_.start_time = start_time[i];
        w_.duration = duration[i];
        w_.end_time = w_.start_time + w_.duration - 1;
        aw->workshops.push_back(w_);
    }
    return aw;
}

bool CompareWorkshops(Workshop w1, Workshop w2)
{
    return w1.end_time < w2.end_time;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    vector<Workshop> ws;
    for (int i = 0; i < ptr->n; i++)
        ws.push_back(ptr->workshops[i]);
    sort(ws.begin(), ws.end(), CompareWorkshops);
    int result = 0, end_time = 0;
    for (vector<Workshop>::iterator it = ws.begin(); it != ws.end(); it++)
        if (it->start_time > end_time)
        {
            end_time = it->end_time;
            result++;
        }
    return result;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
