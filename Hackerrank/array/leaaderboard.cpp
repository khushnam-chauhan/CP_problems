#include <vector>
#include <iostream>

using namespace std;

// Function to manually sort the vector in descending order
void manualSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to manually find the index of an element in the vector
int manualFindIndex(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i + 1;  // Add 1 to convert from zero-based index to rank
        }
    }
    return -1;  // Element not found
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    // Combine ranked and player scores
    ranked.insert(ranked.end(), player.begin(), player.end());

    // Sort in descending order manually
    manualSort(ranked);

    // Determine the index of each player's score in the combined leaderboard manually
    vector<int> playerRanks;
    for (int i = 0; i < player.size(); i++) {
        int index = manualFindIndex(ranked, player[i]);
        playerRanks.push_back(index);
    }

    return playerRanks;
}

int main() {
    // Example usage
    vector<int> ranked = {100, 90, 90, 80, 75, 60};
    vector<int> player = {50, 65, 77, 90, 102};

    vector<int> result = climbingLeaderboard(ranked, player);

    // Output the result
    cout << "Player Ranks: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
