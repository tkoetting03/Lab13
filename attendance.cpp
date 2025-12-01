#include <iostream>
#include <vector>

bool fail_lecture(const std::vector<int>& attendance_records) {
    int absentcount = 0;
    for (int i = 1; i < attendance_records.size(); ++i) { // bug
        absentcount += (attendance_records[i] == 0);
    }
    return absentcount >= 3;
}

int main() {
    std::vector<int> tc1 = {1,0,0,0,1,1,1,1,1,1};
    std::vector<int> tc2 = {0,0,0,0,1,1,1,1,1,1};
    std::vector<int> tc3 = {0,0,0,1,1,1,1,1,1,1};

    std::cout << "tc1: " << fail_lecture(tc1) << "\n";
    std::cout << "tc2: " << fail_lecture(tc2) << "\n";
    std::cout << "tc3: " << fail_lecture(tc3) << "\n";

    return 0;
}