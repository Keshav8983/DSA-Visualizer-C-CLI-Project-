#include <bits/stdc++.h>
using namespace std;

class SortVisualizer {
public:
    void bubbleSort(vector<int> arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            cout << "Pass " << i + 1 << ": ";
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
            }
            printArray(arr);
        }
        cout << "Sorted Array: "; printArray(arr);
    }

    void insertionSort(vector<int> arr) {
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
            cout << "Step " << i << ": ";
            printArray(arr);
        }
        cout << "Sorted Array: "; printArray(arr);
    }

    void selectionSort(vector<int> arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIdx]) minIdx = j;
            }
            swap(arr[i], arr[minIdx]);
            cout << "Step " << i + 1 << ": ";
            printArray(arr);
        }
        cout << "Sorted Array: "; printArray(arr);
    }

    void printArray(vector<int> arr) {
        for (int x : arr) cout << x << " ";
        cout << endl;
    }
};

class SearchVisualizer {
public:
    void linearSearch(vector<int> arr, int target) {
        for (int i = 0; i < arr.size(); i++) {
            cout << "Checking index " << i << " -> " << arr[i] << endl;
            if (arr[i] == target) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found!" << endl;
    }

    void binarySearch(vector<int> arr, int target) {
        sort(arr.begin(), arr.end());
        cout << "Sorted Array for Binary Search: ";
        for (int x : arr) cout << x << " ";
        cout << endl;

        int l = 0, r = arr.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            cout << "Checking middle index " << mid << " -> " << arr[mid] << endl;
            if (arr[mid] == target) {
                cout << "Element found at index " << mid << endl;
                return;
            }
            else if (arr[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        cout << "Element not found!" << endl;
    }
};

class GraphVisualizer {
public:
    void bfs(int V, vector<vector<int>>& adj, int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);

        cout << "BFS Traversal: ";
        while (!q.empty()) {
            int node = q.front(); q.pop();
            cout << node << " ";
            for (int nbr : adj[node]) {
                if (!visited[nbr]) {
                    visited[nbr] = true;
                    q.push(nbr);
                }
            }
        }
        cout << endl;
    }

    void dfsUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;
        cout << node << " ";
        for (int nbr : adj[node]) {
            if (!visited[nbr]) dfsUtil(nbr, adj, visited);
        }
    }

    void dfs(int V, vector<vector<int>>& adj, int start) {
        vector<bool> visited(V, false);
        cout << "DFS Traversal: ";
        dfsUtil(start, adj, visited);
        cout << endl;
    }
};

int main() {
    SortVisualizer sortVis;
    SearchVisualizer searchVis;
    GraphVisualizer graphVis;

    while (true) {
        cout << "\n==== DSA Visualizer ====\n";
        cout << "1. Sorting Algorithms\n";
        cout << "2. Searching Algorithms\n";
        cout << "3. Graph Algorithms\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            vector<int> arr = {5, 3, 8, 4, 2};
            cout << "Choose Sorting:\n1. Bubble\n2. Insertion\n3. Selection\nChoice: ";
            int c; 
            cin >> c;
            if (c == 1) 
            sortVis.bubbleSort(arr);
            
            else if (c == 2)
            sortVis.insertionSort(arr);
            
            else if (c == 3)
            sortVis.selectionSort(arr);
        }
        else if (choice == 2) {
            vector<int> arr = {5, 3, 8, 4, 2};
            cout << "Enter element to search: ";
            int target; 
            cin >> target;
            cout << "Choose Search:\n1. Linear\n2. Binary\nChoice: ";
            int c; 
            cin >> c;
            
            if (c == 1)
            searchVis.linearSearch(arr, target);
            
            else if (c == 2)
            searchVis.binarySearch(arr, target);
        }
        else if (choice == 3) {
            int V = 5;
            vector<vector<int>> adj = {
                {1, 2}, {0, 3}, {0, 4}, {1}, {2}
            };
            cout << "Choose Graph:\n1. BFS\n2. DFS\nChoice: ";
            int c;
            cin >> c;
            
            if (c == 1)
            graphVis.bfs(V, adj, 0);
            
            else if (c == 2)
            graphVis.dfs(V, adj, 0);
        }
        else break;
    }
    return 0;
}
