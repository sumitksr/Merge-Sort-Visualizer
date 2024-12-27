# Merge Sort Visualizer

This repository contains a C++ implementation of a **Merge Sort Visualizer**. The program demonstrates how the merge sort algorithm works step-by-step, showing the process of dividing and merging subarrays.

## What is Merge Sort?

Merge Sort is a **divide-and-conquer** algorithm that splits an array into two halves, recursively sorts them, and then merges them back together in sorted order. Its time complexity is O(n log n), making it efficient for large datasets.

## Features

- Visualizes the process of breaking down an array into smaller parts.
- Shows intermediate steps during the merging process.
- Displays the final sorted array.

## How It Works

1. Input an array of integers.
2. The program recursively divides the array into smaller parts.
3. Merges the parts while sorting them.
4. Outputs the array at each step.

## How to Compile and Run

### Prerequisites
- A C++ compiler (e.g., g++)
- C++11 or later version

### Steps
1. Clone this repository:
   ```bash
   git clone https://github.com/sumitksr/Merge-Sort-Visualizer.git
   cd Merge-Sort
2. Compile the program:
   ```bash
   g++ merge_sort.cpp -o merge_sort
3. Run the program 
   ```bash
   ./merge_sort
