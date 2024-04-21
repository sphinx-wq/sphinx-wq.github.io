#include <iostream>
#include <map>

using namespace std;

class DataVisualization {
private:
    map<string, int> data;

public:
    void addData(string label, int value) {
        data[label] = value;
    }

    void displayBarChart() {
        cout << "Data Visualization - Bar Chart:\n";
        for (auto const& pair : data) {
            cout << pair.first << ": ";
            for (int i = 0; i < pair.second; ++i) {
                cout << "#"; // Print '#' to represent each unit of data
            }
            cout << " (" << pair.second << ")\n";
        }
    }
};

int main() {
    DataVisualization visualizer;

    // Simulate health data (e.g., steps taken per day)
    visualizer.addData("Monday", 2000);
    visualizer.addData("Tuesday", 3500);
    visualizer.addData("Wednesday", 4000);
    visualizer.addData("Thursday", 3000);
    visualizer.addData("Friday", 5000);

    // Display bar chart of health data
    visualizer.displayBarChart();

    return 0;
}