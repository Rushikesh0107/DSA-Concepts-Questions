#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

vector<string> topKFrequent(vector<string>& words, int k) {
    // Step 1: Count the frequency of each word using a hash map
    unordered_map<string, int> freq;
    for (const string& word : words) {
        freq[word]++;
    }

    // Step 2: Store the words and their frequencies in a vector of pairs
    vector<pair<string, int>> freqVector;
    for (const auto& entry : freq) {
        freqVector.push_back(entry);
    }

    // Step 3: Sort the vector based on the custom comparator
    sort(freqVector.begin(), freqVector.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first; // If frequencies are the same, sort lexicographically
        }
        return a.second > b.second; // Sort by frequency in descending order
    });

    // Step 4: Extract the top k words from the sorted vector
    vector<string> result;
    for (int i = 0; i < k; ++i) {
        result.push_back(freqVector[i].first);
    }

    return result;
}

int main() {
    vector<string> words1 = {"i", "love", "leetcode", "i", "love", "coding"};
    int k1 = 2;
    vector<string> result1 = topKFrequent(words1, k1);
    for (const string& word : result1) {
        cout << word << " ";
    }
    cout << endl;

    vector<string> words2 = {"the", "day", "is", "sunny", "the", "the", "the", "sunny", "is", "is"};
    int k2 = 4;
    vector<string> result2 = topKFrequent(words2, k2);
    for (const string& word : result2) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
