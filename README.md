Overview     
DSA Visualizer is a command-line project in C++ that helps visualize common Data Structures and Algorithms step by step.
It’s designed as an interactive learning tool to understand sorting, searching, and graph algorithms.     

Features    
Sorting Algorithms       
1.Bubble Sort (step by step)     
2.Insertion Sort     
3.Selection Sort      

Searching Algorithms     
1.Linear Search     
2.Binary Search (with sorted array)     

Graph Algorithms     
1.BFS (Breadth First Search)     
2.DFS (Depth First Search)      


Sample Output     
Sorting          
==== DSA Visualizer ====      
1. Sorting Algorithms       
2. Searching Algorithms    
3. Graph Algorithms     
4. Exit      
Enter choice: 1     

Choose Sorting:      
1. Bubble     
2. Insertion     
3. Selection     
Choice: 1    

Array: 5 3 8 4 2    

Pass 1: 3 5 4 2 8      
Pass 2: 3 4 2 5 8    
Pass 3: 3 2 4 5 8     
Pass 4: 2 3 4 5 8     

Sorted Array: 2 3 4 5 8       

Searching      
Choose Search:      
1. Linear     
2. Binary     
Choice: 2     
Enter element to search: 4    

Sorted Array for Binary Search: 2 3 4 5 8     
Checking middle index 2 -> 4     
Element found at index 2     

Graph     
Choose Graph:      
1. BFS        
2. DFS     
Choice: 1      

BFS Traversal: 0 1 2 3 4        

Tech Stack          
Language: C++                
Concepts Used:      
OOP (class-based design)       
STL (vector, queue, stack, map)     
Algorithms (sorting, searching, graph traversal)      

How to Run     
Clone the repository:      

git clone https://github.com/yourusername/DSA-Visualizer.git      
cd DSA-Visualizer      

Compile using g++:      

g++ src/main.cpp -o dsa_visualizer


Run the program:

./dsa_visualizer
