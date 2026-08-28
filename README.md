# 🧠 Competitive Programming

> **A structured journey through algorithms, data structures, problem solving, and competitive programming with C++.**

This repository documents my journey into **Competitive Programming (CP)** — from revising C++ and learning the STL to studying algorithms, data structures, mathematical techniques, and solving problems under constraints.

This is not intended to be a collection of copied solutions.

It is a **learning archive**: concepts I study, implementations I build, problems I solve, mistakes I make, and patterns I discover along the way.

---

## 🎯 Why This Repository Exists

I am starting Competitive Programming with a basic foundation in C++ and Java, but with limited experience in:

* Data Structures & Algorithms
* Competitive Programming
* C++ STL
* Algorithmic problem solving
* Contest environments

The goal of this repository is to develop those skills systematically.

My primary language for CP is **C++** because of its performance, concise syntax, and especially the Standard Template Library (STL), which provides the containers and algorithms commonly used in competitive programming.

Java remains a secondary language for maintaining general programming fluency and occasionally reimplementing selected problems.

---

## 🧭 Learning Philosophy

I am not trying to memorize hundreds of algorithms.

The learning process is:

```text
Learn
  ↓
Understand
  ↓
Implement
  ↓
Solve
  ↓
Get Stuck
  ↓
Analyze
  ↓
Reimplement
  ↓
Review
  ↓
Contest
  ↓
Upsolve
  ↓
Repeat
```

For each important topic, I want to understand:

* What problem does it solve?
* Why does it work?
* When should I use it?
* What are its constraints?
* What is its time complexity?
* What are its edge cases?
* What common mistakes should I avoid?

The ultimate goal is not merely to recognize algorithms.

> **The goal is to develop the ability to derive useful approaches from unfamiliar problems.**

---

# 🗺️ Roadmap

The complete learning roadmap is maintained separately:

**→ [View the Competitive Programming Roadmap](ROADMAP.md)**

The current progression is approximately:

```text
C++ Revision
      ↓
C++ STL
      ↓
Complexity Analysis
      ↓
Fundamental DSA
      ↓
Sorting & Searching
      ↓
Two Pointers / Sliding Window
      ↓
Recursion & Backtracking
      ↓
Mathematics & Number Theory
      ↓
Bit Manipulation
      ↓
Greedy Algorithms
      ↓
Graph Algorithms
      ↓
Trees
      ↓
Dynamic Programming
      ↓
Advanced Data Structures
      ↓
Contest Practice
```

The roadmap is intentionally long-term.

I am treating Competitive Programming as a **secondary priority**, alongside my studies, software-engineering learning, and professional projects.

Consistency matters more than speed.

---

# 📚 What I'm Learning

## C++ for Competitive Programming

Before going deep into algorithms, I am strengthening the C++ features that are important for CP:

* Input / Output
* Functions
* References
* Pointers
* Arrays
* Strings
* Structs
* Lambdas
* `auto`
* Range-based loops
* Custom comparators
* Complexity-aware implementation

The broader C++ language and modern C++ ecosystem are explored separately in my [`cpp-journey`](https://github.com/ShahJabir/cpp-journey) repository.

---

## STL

STL is a core part of my CP foundation.

Topics include:

### Containers

* `vector`
* `array`
* `string`
* `pair`
* `tuple`
* `stack`
* `queue`
* `deque`
* `priority_queue`
* `set`
* `multiset`
* `map`
* `unordered_map`
* `unordered_set`

### Algorithms

* `sort`
* `reverse`
* `find`
* `count`
* `min_element`
* `max_element`
* `lower_bound`
* `upper_bound`
* `binary_search`
* `accumulate`
* `gcd`
* `lcm`

### Supporting concepts

* Iterators
* Lambdas
* Custom comparators
* Iterator invalidation
* Container complexity

---

# 🧩 Core Topics

## Fundamentals

* Big-O notation
* Arrays
* Strings
* Frequency counting
* Hashing
* Prefix sums
* Difference arrays

## Searching & Sorting

* Sorting algorithms
* Binary search
* Binary search on answer
* Two pointers
* Sliding window

## Recursion & Backtracking

* Recursion
* Subsets
* Permutations
* Combinations
* Backtracking
* Search-space reduction

## Mathematics

* Number theory
* Prime numbers
* GCD / LCM
* Euclidean algorithm
* Sieve of Eratosthenes
* Modular arithmetic
* Fast exponentiation
* Combinatorics
* Bit manipulation

## Greedy Algorithms

* Greedy strategies
* Sorting + greedy
* Interval problems
* Exchange-argument intuition
* Proving greedy choices

## Graphs

* Graph representation
* DFS
* BFS
* Connected components
* Cycle detection
* Shortest paths
* Dijkstra
* DSU / Union-Find
* Minimum Spanning Tree
* Kruskal
* Prim

## Trees

* Tree traversal
* DFS on trees
* Binary trees
* Binary Search Trees
* Tree properties
* Subtrees
* Tree DP

## Dynamic Programming

* 1D DP
* 2D DP
* Grid DP
* Knapsack
* Coin Change
* LIS
* LCS
* Bitmask DP
* Tree DP
* Other advanced DP techniques

## Advanced Data Structures

As my CP level progresses:

* Fenwick Tree
* Segment Tree
* Sparse Table
* Coordinate Compression
* Offline Queries
* Advanced graph/data-structure techniques

---

# 🏆 Problem Sources

I will use different platforms for different purposes rather than treating every platform as equivalent.

| Platform          | Purpose                                  |
| ----------------- | ---------------------------------------- |
| **Codeforces**    | Primary competitive-programming platform |
| **CSES**          | Structured algorithm and DSA practice    |
| **AtCoder**       | Additional contest practice              |
| **LeetCode**      | Supplementary DSA and interview practice |
| **USACO Guide**   | Structured learning roadmap              |
| **CP-Algorithms** | Algorithm and data-structure reference   |

### Codeforces

My primary CP platform.

Used for:

* Rated contests
* Virtual contests
* Timed problem solving
* Problem difficulty progression
* Contest strategy
* Upsolving

### CSES

Used for structured practice across algorithms and data structures.

### AtCoder

Used as an additional contest environment, particularly for practicing clean problem solving under time constraints.

### LeetCode

Used as a **supplementary DSA/interview track**, not as the primary CP platform.

There is significant overlap between LeetCode and CP, but CP places greater emphasis on contest conditions, algorithmic discovery, mathematical reasoning, and broader algorithmic techniques.

### USACO Guide

Used as a structured curriculum and curated source of tutorials and problems. The guide explicitly supports non-USACO competitive programmers as well.

### CP-Algorithms

Used as a technical reference when I need a deeper explanation, proof, implementation detail, or advanced algorithm reference.

---

# 📂 Repository Structure

The repository is organized around **knowledge, algorithms, and problems** rather than simply storing every submission in one directory.

```text
competitive-programming/
│
├── README.md
├── ROADMAP.md
│
├── cpp/
│   └── ...
│
├── stl/
│   └── ...
│
├── fundamentals/
│   └── ...
│
├── algorithms/
│   └── ...
│
├── mathematics/
│   └── ...
│
├── data-structures/
│   └── ...
│
├── graphs/
│   └── ...
│
├── trees/
│   └── ...
│
├── dynamic-programming/
│   └── ...
│
├── problems/
│   ├── codeforces/
│   ├── cses/
│   ├── atcoder/
│   ├── leetcode/
│   └── other/
│
├── contests/
│   ├── codeforces/
│   ├── atcoder/
│   └── virtual/
│
└── notes/
    ├── patterns/
    ├── observations/
    ├── mistakes/
    └── problem-solving/
```

The structure will evolve as the journey progresses.

Empty directories will not be created simply for the sake of having a perfect-looking tree.

---

# 🧠 Problem-Solving Protocol

For problems that require meaningful analysis, I will try to record:

```text
Problem
↓
Constraints
↓
Brute Force
↓
Why Brute Force Fails
↓
Observation
↓
Algorithm
↓
Correctness / Reasoning
↓
Complexity
↓
Implementation
↓
Testing
↓
What I Learned
```

When I get stuck, I will first attempt to solve the problem independently before looking at hints or editorials.

After reading an editorial, the goal is to **close it and implement the solution independently**.

---

# 🏁 Contest Strategy

Competitive programming is not only about knowing algorithms.

It also requires:

* Time management
* Reading constraints quickly
* Identifying problem difficulty
* Choosing which problem to solve first
* Avoiding unnecessary wrong submissions
* Debugging under pressure
* Recognizing familiar patterns
* Upsolving after contests

The progression will therefore include:

```text
Practice
   ↓
Mini contests
   ↓
Official contests
   ↓
Virtual contests
   ↓
Upsolving
   ↓
Contest analysis
```

---

# 📈 Progress

Progress will be measured using more than rating.

Important metrics include:

* Topics learned
* Problems solved
* Problems solved independently
* Contest performance
* Problems upsolved
* Recurring mistakes
* Algorithms recognized
* Algorithms derived independently
* Implementation speed
* Understanding of complexity

Rating is a useful measurement.

It is not the entire objective.

> **The scoreboard is the rating. The actual skill is the thinking.**

---

# 📝 Notes

The `notes/` directory is for things that are worth remembering beyond a single problem.

Examples:

* Common patterns
* Interesting observations
* Common mistakes
* Complexity tricks
* Contest lessons
* Algorithm-selection heuristics
* Implementation pitfalls

This section is intentionally personal.

It represents what I have learned rather than attempting to become another generic CP encyclopedia.

---

# 📊 Long-Term Goal

The first major goal is to build a strong foundation rather than chase a specific rating.

By the end of the first year, I want to be comfortable with:

```text
C++ STL
Big-O
Arrays
Strings
Hashing
Prefix Sums
Binary Search
Two Pointers
Sliding Window
Recursion
Backtracking
Greedy
Number Theory
Bit Manipulation
DFS
BFS
Dijkstra
DSU
MST
Trees
Dynamic Programming
Fenwick Tree
Segment Tree
```

More importantly, I want to be able to approach an unfamiliar problem and ask:

> **What information does the problem give me, what constraints does it impose, and what structure can I exploit?**

---

# 🔗 Related Repository

My broader C++ learning journey:

**[⚙️ C++ Journey](https://github.com/ShahJabir/cpp-journey)**

That repository focuses on C++ itself, modern C++, tooling, systems-level concepts, and different domains where C++ is used.

This repository is intentionally separated from it so that Competitive Programming can have its own dedicated learning path, problem archive, and progression.

---

# 📖 Resources

* [Codeforces](https://codeforces.com/)
* [CSES Problem Set](https://cses.fi/problemset/)
* [AtCoder](https://atcoder.jp/)
* [LeetCode](https://leetcode.com/)
* [USACO Guide](https://usaco.guide/)
* [CP-Algorithms](https://cp-algorithms.com/)
* [Competitive Programmer's Handbook](https://cses.fi/book/book.pdf)
* [Competitive Programming 4](https://cpbook.net/)

USACO Guide maintains a broader curated list of competitive-programming resources, including CSES, CP-Algorithms, Codeforces Educational resources, KACTL, and other references.

---

# 🚧 Status

**Active — Learning in Progress**

This repository will continuously change.

Topics will be added as I learn them, solutions will improve as my understanding develops, and the structure will evolve when necessary.

This is not a finished course.

It is a record of the journey.

---

## License

Unless otherwise stated, the code and notes in this repository are provided for educational purposes.

See [`LICENSE`](LICENSE) for the applicable license.
