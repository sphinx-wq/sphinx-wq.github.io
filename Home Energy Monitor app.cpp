#include <iostream>
#include <map>

using namespace std;

class HomeEnergyMonitor {
private:
    map<string, double> energyUsage;

public:
    void recordEnergyUsage(string utility, double usage) {
        energyUsage[utility] += usage;
    }

    void displayEnergyUsage() {
        cout << "Energy Usage Summary:\n";
        for (auto const& pair : energyUsage) {
            cout << pair.first << ": " << pair.second << " kWh\n";
        }
    }
};

int main() {
    HomeEnergyMonitor monitor;

    // Simulate recording energy usage for different utilities
    monitor.recordEnergyUsage("Electricity", 150.5);
    monitor.recordEnergyUsage("Gas", 30.2);
    monitor.recordEnergyUsage("Water", 25.8);

    // Display energy usage summary
    monitor.displayEnergyUsage();

    return 0;
}