class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int rlt(0);
        for (int i = 0; i < startTime.size(); ++i) {
            if (startTime[i]<=queryTime && endTime[i]>=queryTime)
                ++rlt;
        }
        return rlt;
    }
};
