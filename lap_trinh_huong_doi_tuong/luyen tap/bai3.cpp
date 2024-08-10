#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class HocSinh {
private:
    string ma_hs;
    string name;
    string address;
    int toan;
    int van;

public:
    HocSinh(string ma_hs, string name, string address, int toan, int van) {
        this->ma_hs = ma_hs;
        this->name = name;
        this->address = address;
        this->toan = toan;
        this->van = van;
    }

    int diem_TB() const {
        return (toan + van) / 2;
    }

    string getMaHS() const {
        return ma_hs;
    }

    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }
};

// Hàm so sánh để sử dụng trong std::sort
bool compareDiemTB(const HocSinh* hs1, const HocSinh* hs2) {
    // So sánh theo điểm trung bình giảm dần
    return hs1->diem_TB() > hs2->diem_TB();
}

class List {
private:
    vector<HocSinh*> students;

public:
    void add(HocSinh* hs) {
        students.push_back(hs);
    }

    void sortByDiemTB() {
        // Sắp xếp danh sách học sinh theo điểm trung bình
        sort(students.begin(), students.end(), compareDiemTB);
    }

    HocSinh* findHighestAverage() const {
        if (students.empty()) {
            return nullptr;
        }
        return students.front(); 
    }
};

int main() {
    List danh_sach_hs;
    danh_sach_hs.add(new HocSinh("001", "Nguyen Van A", "Hanoi", 8, 9));
    danh_sach_hs.add(new HocSinh("002", "Tran Thi B", "Hanoi", 7, 9));
    danh_sach_hs.add(new HocSinh("003", "Le Van C", "Hanoi", 9, 8));
    danh_sach_hs.sortByDiemTB();
    HocSinh* highest_average = danh_sach_hs.findHighestAverage();
    if (highest_average != nullptr) {
        cout << "Hoc sinh co diem trung binh cao nhat la: " << highest_average->getName() << endl;
        cout << "Ma hoc sinh: " << highest_average->getMaHS() << endl;
        cout << "Dia chi: " << highest_average->getAddress() << endl;
    } else {
        cout << "Danh sach hoc sinh rong." << endl;
    }

    return 0;
}
