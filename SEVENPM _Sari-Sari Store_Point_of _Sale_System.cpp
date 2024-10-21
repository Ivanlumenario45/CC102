#include <iostream>
using namespace std;
int main ()
{
	int sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeeCostPHP, milkCostPHP;
	int sugarQTY, riceQTY, sardinesQTY, coffeeQTY, milkQTY;
	float usdToPhp, poundToPhp;
	
	cout << "Items name\n";
	cout << "Sugar\n";
	cout << "Rice\n";
	cout << "Sardines\n";
	cout << "Coffee\n";
	cout << "Milk\n";
	
	cout << "-------------------------------------------------\n";
	cout << "Enter conversion rate from USD to PHP: ";
	cin >> usdToPhp;
	
	cout << "Enter quantity of sugar: "; 
    cin >> sugarQTY;
    cout << "Enter quantity of rice: "; 
    cin >> riceQTY;
    cout << "Enter quantity of sardines: "; 
    cin >> sardinesQTY;
    cout << "Enter quantity of coffee: "; 
    cin >> coffeeQTY;
    cout << "Enter quantity of milk: "; 
    cin >> milkQTY;
	
	cout << "-------------------------------------------------\n";
	cout << "Enter conversion rate from Pound to PHP: ";
	cin >> poundToPhp;
	cout << "Enter price of sugar (in USD): ";
	cin >> sugarPriceUSD;
	cout << "Enter price of rice (in Pounds): ";
	cin >> ricePricePound;
	cout << "Enter price of sardines (in Pounds): ";
	cin >> sardinesPricePound;
	cout << "Enter price of coffee (in USD): ";
	cin >> coffeePriceUSD;
	cout << "Enter price of milk (in USD): ";
	cin >> milkPriceUSD;
	
	sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQTY;
    riceCostPHP = ricePricePound * poundToPhp * riceQTY;
    sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQTY;
    coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQTY;
    milkCostPHP = milkPriceUSD * usdToPhp * milkQTY;
	
	float totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	
    cout << "-------------------------------------------------------\n";
    cout << "Purchase Details:\n";
    cout << "Sugar: " << sugarQTY << " x " << sugarPriceUSD * usdToPhp << " PHP = " << sugarCostPHP << " PHP\n";
    cout << "Rice: " << riceQTY << " x " << ricePricePound * poundToPhp << " PHP = " << riceCostPHP << " PHP\n";
    cout << "Sardines: " << sardinesQTY << " x " << sardinesPricePound * poundToPhp << " PHP = " << sardinesCostPHP << " PHP\n";
    cout << "Coffee: " << coffeeQTY << " x " << coffeePriceUSD * usdToPhp << " PHP = " << coffeeCostPHP << " PHP\n";
    cout << "Milk: " << milkQTY << " x " << milkPriceUSD * usdToPhp << " PHP = " << milkCostPHP << " PHP\n";
    cout << "------------------------------------------\n";
    cout << "Total Amount to be Paid: " << totalCostPHP << " PHP\n";
	
	return 0;
}
