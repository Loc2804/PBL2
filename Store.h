#include <iostream>
#include <string.h>
#include "Template.h"
#include "Bill.h"
#include "QLNV.h"
#include <ctime>

using namespace std;

class Store
{
	private:
		float Total;
		LinkedList<Bill> b;//=LinkedList<Bill>::GetInstance();
	public:
		Store(float = 1.0);
		~Store();
		//doanh thu theo ng�y
		float CalDailyTotal();
		//doanh thu theo th�ng
		float CalMonthlyTotal();
};