#include "Store.h"

Store::Store(float t)
{
	Total = t;
}

Store::~Store() {}

float Store::CalDailyTotal()
{
    Total = 0;
    time_t currentTime = time(0);
    Node<Bill>* current = b.GetHead();
    // Duyệt qua danh sách liên kết và tính tổng doanh thu trong ngày
    while (current != nullptr)
    {
        Bill currentBill = current->GetData();
        // So sánh thời gian của hóa đơn với thời gian hiện tại
        if (difftime(currentTime, currentBill.GetDate().GetTimestamp()) < 24 * 60 * 60)
        {
            // Hóa đơn được coi là trong ngày, cộng vào tổng doanh thu
            Total += currentBill.GetCost();
        }
        current = current->GetNext();
    }
    return Total;
}

float Store::CalMonthlyTotal()
{
    Total = 0;
    time_t currentTime = time(0);
    Node<Bill>* current = b.GetHead();
    // Duyệt qua danh sách liên kết và tính tổng doanh thu trong ngày
    while (current != nullptr)
    {
        Bill currentBill = current->GetData();

        // So sánh thời gian của hóa đơn với thời gian hiện tại
        if (difftime(currentTime, currentBill.GetDate().GetTimestamp()) < 24 * 60 * 60 *30)
        {
            // Hóa đơn được coi là trong ngày, cộng vào tổng doanh thu
            Total += currentBill.GetCost();
        }
        current = current->GetNext();
    }
    return Total;
}