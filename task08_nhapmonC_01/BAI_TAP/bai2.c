#include <math.h>;
#include <stdio.h>;
long res = 0;
int solve(long dataBonus, long dataVal, long dataMain)
{
    int buy = 0;
    while (buy < dataMain)
    {
        buy = buy + 1;
        res = res + dataVal;
        if (buy % dataBonus == 0)
            {
                buy = buy + 1;
            }
    }
    return res;
}
int main()
{
    long dataBonus, dataMain, dataVal;
    scanf("%ld %ld %ld",&dataBonus, &dataMain, &dataVal);
    solve(dataBonus, dataVal, dataMain);
    printf("%ld",res);
    return 0;
}
/*Nhân dịp tổ chức OLP2012, siêu thị Big C tổ chức bán bút với chương trình  khuyến mãi như sau: Giá một chiếc bút là t đồng, khi mua m chiếc khách hàng được tặng thêm 1 chiếc. Để phục vụ kỳ thi, Ban tổ chức cần phải chuẩn bị ít nhất n bút phát cho các thí sinh dự thi.
Yêu cầu: Cho biết m, n và t. Tính số tiền S (đơn vị đồng) ít nhất cần có để mua bút.
Dữ  liệu nhập:
- Gồm một dòng chứa ba số nguyên dương m, n và t (1 ≤ m ≤ 106, 0 ≤ n, t ≤ 106), mỗi số cách nhau một khoảng trắng.
Dữ liệu xuất:
- Là một số nguyên xác định số tiền cần thiết.
Ví dụ
input
2 3 100
output
200 */
