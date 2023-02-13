// You are given a maze with N cells. Each cell may have multiple entry points but not more than one exit (ie. entry/exit points are unidirectional doors like valves). 
 
  
 
// The cells are named with an integer value from 0 to N-1. 
 
// You have to find: 
 
  
 
// Find the node number of maximum weight node (Weight of a node is the sum of node numbers of all nodes pointing to that node) 
 
  
 
// INPUT FORMAT 
 
//  1. An integer T, denoting the number of testcases, followed by 2T lines, as each testcase will contain 2 lines. 
 
//  2. The first line of each testcase has the number of cells N. 
 
//  3. The second line of each testcase has a list of N values of the edge[] array. edge[i] contains the cell number that can be reached from of cell 'i' in one step. edge[i] is -1 if the 'i'th cell doesn't have an exit. 
 
  
 
// OUTPUT FORMAT 
 
// First line denotes the node number with maximum wight node. 
 
  
 
// Sample Input                                  
 
// 1 
// 23 
// 4 4 1 4 13 8 8 8 0 8 14 9 15 11 -1 10 15 22 22 22 22 22 21 
 
 
// Sample Output  
 
// 22 
 
 
 
// Function Description 
// N/A 
 
// Constraints 
// N/A

void findMaxWeightNode(int T, vector<pair<int, vector<int>>> testcases) { 
    for (int i = 0; i < T; i++) { 
        int n = testcases[i].first; 
        vector<int> edge = testcases[i].second; 
        vector<int> count(n, 0); 
        for (int j = 0; j < n; j++) { 
            if (edge[j] != -1) { 
                count[edge[j]] += j; 
            } 
        } 
        int maxWeight = -1; 
        int node = -1; 
        for (int j = 0; j < n; j++) { 
            if (count[j] > maxWeight) { 
                maxWeight = count[j]; 
                node = j; 
            } 
        } 
        cout << node << endl; 
    } 
} 
 
int main() { 
    int T; 
    cin >> T; 
    vector<pair<int, vector<int>>> testcases; 
    for (int i = 0; i < T; i++) { 
        int n; 
        cin >> n; 
        vector<int> edge(n); 
        for (int j = 0; j < n; j++) { 
            cin >> edge[j]; 
        } 
        testcases.push_back(make_pair(n, edge)); 
    } 
    findMaxWeightNode(T, testcases); 
    return 0; 
}
