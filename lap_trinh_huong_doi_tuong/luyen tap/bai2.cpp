// Xét hóa đơn gồm nhiều mặt hàng với số lượng tương ứng. Có hai loại mặt hàng:
// Hàng nội địa: Thành tiền = đơn giá + thuế VAT.
// Hàng nhập khẩu: Thành tiền = 0.9 * đơn giá + thuế VAT.
// Hãy viết chương trình cho phép:
// Nhận vào thông tin chi tiết của một hóa đơn bán hàng. 
//Thông tin gồm có: mã hóa đơn, người mua hàng, ngày lập hóa đơn, danh sách mặt hàng và số lượng tương ứng.
// Tính tổng tiền hóa đơn, biết VAT = 5%.
#include <iostream>
#include <string>
using namespace std;
class ThongTin{
    private:
    string ma_hoa;
    string nguoi;
    int ngay;
    int so_luong;
    int danh_sach;
    public:
    ThongTin(string ma_hoa,string nguoi,int ngay,int so_luong,int danh_sach){
        this->ma_hoa=ma_hoa;
        this->nguoi=nguoi;
        this->ngay=ngay;
        this->so_luong=so_luong;
        this->danh_sach=danh_sach;
    }

};

class NoiDia{
    private:
    int don_gia;
    int thue_VAT;
    ThongTin info;
    public:
    NoiDia(int don_gia,int thue_VAT,ThongTin info):info(info){
        this->don_gia=don_gia;
        this->thue_VAT=thue_VAT;
    }
    int tinh_tien_noidia(){
        return don_gia+thue_VAT;
    }
};
class NhapKhau{
    private:
    NoiDia *a;
    ThongTin b;
    public:
    NhapKhau(NoiDia* a, ThongTin b) : a(a), b(b) {}

    int tinh_tien_nhapkhau() {
        return 0.9 * a->tinh_tien_noidia();
    }

};
int main() {
    ThongTin thongtin("ABC", "Nguyen Van A", 1, 100, 123);
    NoiDia noidia(100, 10, thongtin);
    NhapKhau nhapkhau(&noidia, thongtin);

    cout << "Tien nhap khau: " << nhapkhau.tinh_tien_nhapkhau() << endl;

    return 0;
}