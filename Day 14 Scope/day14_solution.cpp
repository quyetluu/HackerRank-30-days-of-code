#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> e): elements(e){
    }
    
    
    void computeDifference() {
        int maximum = 0;

        for (int i = 0; i < elements.size(); i++) {
            for (int j = i+1; j < elements.size(); j++) {
                int absolute = abs(elements[i] - elements[j]);
                if (absolute > maximum) maximum = absolute;
            }
        }
        maximumDifference = maximum;
    }
	
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}