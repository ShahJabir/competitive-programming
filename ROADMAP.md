# Competitive Programming — 1-Year Roadmap

# Competitive Programming — 1-Year Roadmap

> **Purpose:** Build a strong competitive-programming foundation over roughly one year while keeping CP as a **secondary priority** behind studies, the main engineering/learning path, agency work, and projects.
> 

## 1. Personal Strategy

### Current starting point

- Basic C/C++ knowledge
- Java knowledge, including OOP and pointers/references concepts
- Comfortable enough with programming fundamentals to begin problem solving
- **No STL experience yet**
- **Limited DSA knowledge**
- **No previous competitive-programming experience**

### Priority model

1. Studies / primary responsibilities
2. Main software-engineering and systems learning path
3. Agency and client/project work
4. Competitive Programming — deliberate secondary track

### Weekly commitment

- **Minimum:** 4 hours/week
- **Target:** 5–7 hours/week
- **Optional high-output week:** 8–10 hours
- During exams, deadlines, or heavy project periods: reduce CP rather than abandoning it completely.

### Core principle

**Consistency > intensity > rating.**

The goal of Year 1 is not to become a full-time competitive programmer. The goal is to develop algorithmic thinking, DSA intuition, complexity analysis, problem decomposition, and strong C++ problem-solving ability.

---

# 2. Language Strategy

## Primary: C++

Use **C++ as the main CP language**.

### Why C++?

- Excellent Standard Template Library (STL)
- Fast execution
- Concise implementations
- Excellent support for graphs, DP, data structures, and algorithms
- Huge competitive-programming ecosystem
- Most editorials, templates, discussions, and examples use C++ heavily
- `vector`, `set`, `map`, `unordered_map`, `priority_queue`, `sort`, `lower_bound`, etc. Remove large amounts of implementation overhead

### Secondary: Java

Keep Java as a secondary language. Maintain enough familiarity with:

- Arrays
- `String` / `StringBuilder`
- `ArrayList`
- `HashMap`
- `HashSet`
- `PriorityQueue`
- `Arrays`
- `Collections`
- Generics

Do **not** alternate languages every day. Learn algorithms in C++ first; occasionally reimplement selected problems in Java to reinforce language fluency.

### Rule

> **CP → C++ first. Java → secondary implementation/learning tool.**
> 

---

# 3. Platform Strategy

## Primary battlefield — Codeforces

Use Codeforces for:

- Rating progression
- Regular contests
- Timed problem solving
- Pattern recognition
- Contest strategy
- Reading constraints and deriving algorithms

Start around **800-rated problems**, then progress gradually through 900, 1000, 1100, 1200, 1300, and beyond.

## Structured practice — CSES

Use CSES as a structured algorithmic problem set. Prioritize:

- Introductory Problems
- Sorting and Searching
- Dynamic Programming
- Graph Algorithms
- Tree Algorithms
- Range Queries

You do **not** need to finish every CSES problem in Year 1.

## Secondary contest platform — AtCoder

Use AtCoder Beginner Contests to develop clean problem-solving and contest discipline. Start participating casually after you have basic STL and DSA foundations.

## Curriculum — USACO Guide

Use USACO Guide to answer:

> “What should I learn next?”
> 

Use its curated topics and problem sets rather than randomly jumping between algorithms.

## Reference — CP-Algorithms

Use CP-Algorithms as a technical reference when you need deeper explanations, proofs, implementation details, or advanced algorithm references.

## Resource hierarchy

**USACO Guide → curriculum**

**Codeforces → primary practice + contests**

**CSES → structured algorithm practice**

**AtCoder → secondary contests**

**CP-Algorithms → reference**

---

# 4. Year-at-a-Glance

| Period   | Main Focus               | Expected Outcome                                   |
| -------- | ------------------------ | -------------------------------------------------- |
| Month 1  | C++ + Java revision      | Fast, reliable syntax and implementation           |
| Month 2  | C++ STL                  | Comfortable with standard containers/algorithms    |
| Month 3  | Big-O + fundamental DSA  | Understand complexity and core data structures     |
| Month 4  | Sorting + searching      | Binary search, two pointers, prefix sums           |
| Month 5  | Recursion + mathematics  | Recursion, number theory, modular arithmetic, bits |
| Month 6  | Greedy + problem solving | Learn to find and justify observations             |
| Month 7  | Graphs I                 | DFS, BFS, components, grid problems                |
| Month 8  | Graphs II + trees        | Dijkstra, DSU, MST, tree fundamentals              |
| Month 9  | Dynamic Programming I    | State, transition, 1D/2D DP, knapsack              |
| Month 10 | Dynamic Programming II   | LIS, LCS, tree/bitmask/digit DP introductions      |
| Month 11 | Advanced data structures | Fenwick tree, segment tree, compression            |
| Month 12 | Consolidation + contests | Integrate knowledge and develop contest habits     |

---

# 5. Month 1 — C++ and Java Revision

## Objective

Turn existing language knowledge into **fast competitive-programming implementation ability**.

### C++ revision

Review:

- Variables and data types
- Operators
- Conditions
- Loops
- Functions
- Arrays
- Strings
- References
- Pointers
- `struct`
- `enum`
- `const`
- `auto`
- Range-based `for`
- Pass-by-value vs pass-by-reference
- Function overloading
- Lambda basics
- Scope and lifetime
- Stack vs heap at a conceptual level

### Java revision

Review:

- Primitive types
- Arrays
- `String`
- `StringBuilder`
- Methods
- Classes/interfaces/generics at a CP-relevant level
- `ArrayList`
- `HashMap`
- `HashSet`
- `PriorityQueue`
- `Arrays`
- `Collections`

### Do not spend time on

- Spring
- Hibernate/JPA
- Enterprise Java
- Advanced framework concepts

### Practice target

**10–20 very easy problems**.

### Exit criteria

You can implement a small solution from a problem statement without fighting the language syntax.

---

# 6. Month 2 — C++ STL

## Objective

Make STL second nature.

### Containers

#### Sequential

- `vector`
- `array`
- `string`
- `pair`
- `tuple`

#### Adapters

- `stack`
- `queue`
- `deque`
- `priority_queue`

#### Ordered associative

- `set`
- `multiset`
- `map`
- `multimap`

#### Hash-based

- `unordered_set`
- `unordered_map`

### Algorithms

Learn and practice:

- `sort`
- `reverse`
- `find`
- `count`
- `min_element`
- `max_element`
- `lower_bound`
- `upper_bound`
- `binary_search`
- `accumulate`
- `gcd`
- `lcm`

### Iterators

Understand:

- `begin()` / `end()`
- iterator traversal
- iterator invalidation at a practical level

### Lambda and custom comparators

Practice sorting:

- descending order
- pairs by first/second field
- custom structs

### Practice target

**20–30 problems**.

### Exit criteria

You can look at `map<int, int>`, `set<pair<int,int>>`, `vector<vector<int>>`, and `priority_queue<pair<int,int>>` and immediately understand what each structure provides.

---

# 7. Month 3 — Big-O + Fundamental DSA

## Complexity

Master:

- `O(1)`
- `O(log n)`
- `O(n)`
- `O(n log n)`
- `O(n²)`
- `O(2^n)`
- `O(n!)`

More importantly: derive complexity from code.

### Fundamental structures

#### Arrays

- Traversal
- Frequency arrays
- Prefix sums
- Difference arrays

#### Strings

- Character frequency
- Basic manipulation
- Substrings

#### Linked lists

Understand structure, operations, and complexity. Do not overinvest in linked-list interview-style exercises.

#### Stack

- LIFO
- Balanced parentheses
- Monotonic stack introduction
- Next greater element

#### Queue

- FIFO
- BFS intuition

#### Hashing

- `unordered_map`
- `unordered_set`
- Frequency counting

### Practice target

**25–35 problems**.

---

# 8. Month 4 — Sorting, Searching, Two Pointers

## Sorting

Understand:

- Selection sort
- Insertion sort
- Bubble sort
- Merge sort
- Quick sort

Know why they have different complexities, but use STL `sort()` in normal contests.

## Binary Search

Master:

- Classic binary search
- `lower_bound`
- `upper_bound`
- Binary search over a monotonic predicate
- Binary search on answer

Key pattern:

> Find the minimum/maximum value `X` for which a condition becomes true/false.
> 

## Two pointers

Learn:

- Left/right pointers
- Sliding window
- Frequency window
- Pair problems
- Longest/shortest valid segment patterns

## Practice

- Codeforces: mostly 800–1000
- CSES: Introductory + selected Sorting and Searching problems

### Practice target

**30–40 problems**.

---

# 9. Month 5 — Recursion, Backtracking, Mathematics, Bit Manipulation

## Recursion

Understand:

- Base case
- Recursive case
- Call stack
- Recursive state

Practice:

- Subsets
- Permutations
- Combinations
- Grid recursion
- Basic backtracking

## Number theory

Learn:

- Prime numbers
- Divisibility
- Factorization
- GCD
- LCM
- Euclidean algorithm
- Sieve of Eratosthenes

## Modular arithmetic

Learn:

- Modular addition
- Modular subtraction
- Modular multiplication
- Modular exponentiation

## Bit manipulation

Learn:

- AND
- OR
- XOR
- NOT
- Left/right shift
- Set/unset/toggle bits
- Bit masks
- Subset representation basics

### Practice target

**30–40 problems**.

---

# 10. Month 6 — Greedy + Problem-Solving Skills

## Objective

Move from “knowing algorithms” toward “finding observations.”

Learn common greedy patterns:

- Sorting + greedy
- Interval scheduling
- Choosing earliest finishing item
- Choosing smallest/largest feasible item
- Exchange-argument intuition

Do not memorize greedy solutions. Learn to justify why a local choice produces a globally optimal solution.

## Problem-solving framework

For each problem:

1. Understand the statement.
2. Read constraints.
3. Build a brute-force idea.
4. Identify why brute force fails.
5. Search for an observation.
6. Derive the algorithm.
7. Prove/justify it.
8. Estimate complexity.
9. Implement.
10. Test edge cases.

### Practice target

**30–40 problems**.

---

# 11. Month 7 — Graphs I: DFS, BFS, Components

## Graph fundamentals

Learn:

- Vertex
- Edge
- Directed/undirected graph
- Weighted graph
- Degree
- Path
- Cycle
- Connected component
- Adjacency matrix
- Adjacency list

Typical C++ representation:

```cpp
vector<vector<int>> graph;
```

## DFS

Master:

- Recursive DFS
- Iterative DFS
- Connected components
- Basic cycle detection
- Grid DFS

## BFS

Master:

- Queue-based traversal
- Levels
- Shortest path in an unweighted graph
- Grid BFS
- Multi-source BFS introduction

### Exit criteria

You should be comfortable translating a grid or graph problem into a traversal problem.

### Practice target

**30–40 problems**.

---

# 12. Month 8 — Graphs II + Trees

## Dijkstra

Learn shortest paths with non-negative edge weights.

Understand:

- Priority queue
- Relaxation
- Distance array
- Complexity

## DSU / Union-Find

Master:

- `find`
- `union`
- Path compression
- Union by size/rank

## Minimum Spanning Tree

Learn:

- Kruskal
- Prim

Kruskal + DSU should become a standard pattern.

## Trees

Learn:

- Tree properties
- Traversals
- Depth/height
- Subtree concepts
- Binary tree basics
- Binary search tree basics
- Tree DFS
- Basic tree DP intuition

### Practice target

**30–40 problems**.

---

# 13. Month 9 — Dynamic Programming I

## Objective

Stop thinking of DP as memorized formulas.

The central model:

**State → Transition → Base Case → Answer**

## Start with

- Fibonacci-style DP
- Climbing stairs
- 1D DP
- 2D/grid DP
- 0/1 knapsack
- Unbounded knapsack
- Coin change
- Basic subsequence DP

For every DP problem, explicitly write:

```
State:
What does dp[i] mean?

Transition:
How can dp[i] be obtained from previous states?

Base case:
What are the smallest states?

Answer:
Which state contains the final result?
```

### Practice target

**30–40 problems**.

---

# 14. Month 10 — Dynamic Programming II

Learn:

- Longest Increasing Subsequence (LIS)
- Longest Common Subsequence (LCS)
- More subsequence DP
- Interval DP introduction
- Bitmask DP basics
- Tree DP basics
- Digit DP introduction

Do not try to master every advanced DP optimization in Year 1.

### Primary skill

Given a new problem, determine whether it has:

- overlapping subproblems
- an appropriate state
- a manageable transition
- a small enough state space

### Practice target

**30–40 problems**.

---

# 15. Month 11 — Advanced Data Structures

## Fenwick Tree / Binary Indexed Tree

Master:

- Point update
- Prefix query
- Range-sum transformation
- `O(log n)` operations

## Segment Tree

Learn:

- Tree structure
- Build
- Point update
- Range query
- Common monoids/aggregates

Then introduce:

- Lazy propagation
- Range updates

## Sparse Table

Learn for static range queries and RMQ-style problems.

## Coordinate Compression

Learn when values are large, but their relative ordering is what matters.

## Offline queries

Introduction to processing queries in an order that makes them cheaper.

### Practice target

**25–35 problems**.

---

# 16. Month 12 — Consolidation and Contest Mode

Do not fill Month 12 with dozens of new advanced algorithms.

## Consolidate

You should be comfortable with:

- C++ STL
- Big-O
- Arrays
- Strings
- Hashing
- Sorting
- Binary search
- Two pointers
- Prefix sums
- Recursion
- Backtracking
- Greedy
- Number theory
- Bit manipulation
- DFS
- BFS
- Dijkstra
- DSU
- MST
- Trees
- Dynamic programming
- Fenwick tree
- Segment tree

## Contest mode

Practice:

- Codeforces contests
- AtCoder Beginner Contests
- Virtual contests
- Upsolving after contests

The main goal is integration:

> Given an unfamiliar problem, identify the useful concepts without being told the topic.
> 

---

# 17. Contest Progression

## Months 1–2

No rating pressure.

Focus on learning and easy problems.

## Months 3–4

Start Codeforces practice around 800 rating.

Try approximately one contest per month if schedule allows.

## Months 5–6

Participate in beginner-friendly Codeforces contests and AtCoder Beginner Contests.

Goal: finish easy problems under time pressure.

## Months 7–9

Aim for 2–3 contests per month when your schedule permits.

Focus on A/B/C and occasional D-level problems.

## Months 10–12

Increase regular contest participation and virtual contests.

Start analyzing not only accepted solutions, but also:

- time management
- wrong submissions
- missed observations
- contest ordering strategy
- implementation mistakes

---

# 18. Virtual Contest Protocol

When you miss a contest:

1. Start a virtual contest.
2. Set the original contest time limit.
3. Do not open editorials.
4. Solve independently.
5. Submit normally.
6. After the contest, read editorials for unsolved problems.
7. Reimplement the important solutions.
8. Record the lesson.

Virtual contests are not merely practice; they are a bridge between topic-based learning and real contest performance.

---

# 19. Problem-Solving Protocol

Never make “accepted code” the only measure of learning.

For each meaningful problem, record:

```
Problem:
Difficulty:

What is given?
What is required?

Constraints:

Brute force:

Why brute force fails:

Observation:

Algorithm:

Proof / reasoning:

Complexity:

Implementation:

Mistake:

What I learned:
```

## Stuck protocol

### 0–15 minutes

Think independently.

### 15–30 minutes

Try a different angle, brute force, examples, or smaller cases.

### 30–60 minutes

If genuinely stuck, read a hint/editorial.

Then:

> Close the editorial and implement the solution yourself.
> 

Never turn CP into an editorial-copying exercise.

---

# 20. Recommended Problem Volume

Because CP is a secondary priority, quality matters more than quantity.

| Month | Approx. Problems |
| ----- | ---------------- |
| 1     | 10–20            |
| 2     | 20–30            |
| 3     | 25–35            |
| 4     | 30–40            |
| 5     | 30–40            |
| 6     | 30–40            |
| 7     | 30–40            |
| 8     | 30–40            |
| 9     | 30–40            |
| 10    | 30–40            |
| 11    | 25–35            |
| 12    | 30–50            |

A Year 1 result of **250–350 high-quality problems** is already strong for your circumstances. Do not sacrifice your primary responsibilities to hit a problem-count target.

---

# 21. Codeforces Difficulty Progression

## 800–900

Focus:

- Implementation
- Basic math
- Strings
- Arrays
- Brute force
- Sorting

## 900–1100

Focus:

- Greedy
- Binary search
- Two pointers
- Prefix sums
- Basic graphs
- Basic DP

## 1100–1300

Focus:

- DP
- Graphs
- Number theory
- Constructive problems
- Combinatorial reasoning
- More advanced greedy

## 1300–1500

Focus:

- Stronger observations
- Advanced DP patterns
- Graph techniques
- Data structures
- Problem-specific transformations

Do not force yourself upward by rating. Move upward when the previous range starts becoming comfortable.

---

# 22. Year 1 Targets

## Language target

**C++ becomes your default problem-solving language.**

Java remains available as a secondary language.

## Knowledge target

Solid working knowledge of:

```
C++ STL
Big-O
Arrays
Strings
Hashing
Sorting
Binary Search
Two Pointers
Prefix Sums
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

## Practice target

Approximately **250–400 quality problems**.

## Contest target

Approximately **20–30 contests/virtual contests** across the year, depending on schedule.

## Rating target

A reasonable aspirational Codeforces target is approximately **1100–1400+** by the end of the year.

This is a target, not a deadline or measure of personal ability.

---

# 23. What NOT to Learn Too Early

Avoid prematurely diving into:

- FFT
- Suffix automaton
- Heavy-Light Decomposition
- Centroid decomposition
- Min-Cost Max-Flow
- Link-Cut Tree
- Persistent segment trees
- Advanced DP optimizations
- Highly specialized geometry

These topics are valuable later, but they are poor priorities before your fundamentals are strong.

---

# 24. Common Mistakes to Avoid

## Random problem solving

Do not jump randomly across difficulty levels and topics.

Use:

**Topic → Learn → Easy problems → Medium problems → Mixed practice → Contest**

## Tutorial dependency

If you immediately search for the solution, you train yourself to recognize solutions rather than discover them.

## Rating obsession

Rating is feedback, not the objective.

## Language switching

Do not alternate between C++ and Java every day.

## Overlearning theory

You don't need to master every DSA textbook chapter before solving problems.

## Underlearning theory

You also cannot solve advanced problems by collecting random tricks. Build conceptual foundations.

## Sacrificing your main path

If agency deadlines or studies become intense, reduce CP temporarily. Do not let a secondary goal damage primary responsibilities.

---

# 25. Weekly Operating System

A sustainable default week:

| Day       | Activity                    | Time      |
| --------- | --------------------------- | --------- |
| Monday    | Learn/revise one concept    | 30–45 min |
| Tuesday   | 2–3 problems                | 45–60 min |
| Wednesday | Rest / primary work         | —         |
| Thursday  | Concept + problems          | 45–60 min |
| Friday    | 1–3 problems / review       | 30–45 min |
| Weekend   | Contest or focused practice | 2–3 hrs   |

If the week is busy:

> **Minimum viable CP = 2–3 short sessions.**
> 

The objective is to maintain continuity.

---

# 26. The Learning Loop

Use this loop throughout the year:

**Learn → Implement → Solve → Get Stuck → Investigate → Reimplement → Review → Contest → Upsolve → Repeat**

The most important transition is:

**“I know this algorithm” → “I recognize when this algorithm is useful.”**

And the next transition is:

**“I recognize the algorithm” → “I can derive the algorithm from the problem.”**

That is the actual development of competitive-programming skill.

---

# 27. Long-Term Progression After Year 1

If CP remains useful and enjoyable after the first year:

### Year 2 direction

- More 1300–1600 problems
- Advanced DP
- Advanced graph algorithms
- More number theory
- Segment tree variants
- Fenwick tree applications
- String algorithms
- Combinatorics
- Geometry
- More constructive problems
- Stronger contest strategy

### Possible long-term Codeforces progression

```
Beginner
800–1000
    ↓
Developing
1000–1200
    ↓
Intermediate
1200–1400
    ↓
Strong Intermediate
1400–1600
    ↓
Advanced
1600+
```

Do not plan your entire future around the rating ladder now. Reassess after Year 1.

---

# 28. Resource List

## C++

- C++ reference / cppreference for language and STL details
- Your existing C++ learning path for systems-level understanding

## Competitive Programming

- Codeforces — primary platform
- CSES — structured problem set
- AtCoder — secondary contest platform
- USACO Guide — structured curriculum
- CP-Algorithms — algorithm/data-structure reference
- Competitive Programming 4 — optional comprehensive reference book

## Recommended usage

**When asking “What do I learn?” → USACO Guide**

**When asking “Can I solve it?” → Codeforces**

**When asking “Do I need more structured problems?” → CSES**

**When asking “Can I practice another contest style?” → AtCoder**

**When asking “How exactly does this algorithm work?” → CP-Algorithms**

---

# 29. First 8 Weeks — Exact Starting Plan

## Week 1 — C++ Revision

Topics:

- Types
- Loops
- Functions
- Arrays
- Strings
- References
- Pointers
- Structs

Target: **10 easy problems**

## Week 2 — Modern C++ for CP

Topics:

- `auto`
- Range-based loops
- Lambda basics
- `pair`
- `tuple`
- `const`
- References
- Common input/output patterns

Target: **10 problems**

## Week 3 — STL I

Topics:

- `vector`
- `string`
- `array`
- `pair`
- `stack`
- `queue`
- `deque`

Target: **10 problems**

## Week 4 — STL II

Topics:

- `set`
- `multiset`
- `map`
- `unordered_map`
- `priority_queue`

Target: **10 problems**

## Week 5 — STL Algorithms

Topics:

- `sort`
- `reverse`
- `find`
- `count`
- `min_element`
- `max_element`
- `lower_bound`
- `upper_bound`
- `binary_search`

Target: **10–15 problems**

## Week 6 — Complexity + Arrays

Topics:

- Big-O
- Prefix sums
- Frequency arrays
- Two pointers

Target: **10–15 problems**

## Week 7 — Searching

Topics:

- Binary search
- Custom sorting
- Binary search on answer

Target: **10–15 problems**

## Week 8 — First Mini Contest

Choose approximately **5 Codeforces 800-rated problems**.

Set a **2-hour timer**.

Do not use editorials during the contest.

Afterwards, spend approximately one hour on:

- Unsolved problems
- Editorials
- Mistakes
- Complexity
- Better approaches

This is the point where the CP journey transitions from “learning tools” to “solving problems.”

---

# 30. Final Principle

> **Do not try to become a competitive programmer as quickly as possible. Become a better programmer through competitive programming.**
> 

CP is one component of the larger engineering journey.

Use it to sharpen:

- Algorithmic thinking
- DSA intuition
- Complexity analysis
- Debugging
- Mathematical reasoning
- C++ proficiency
- Ability to reason under constraints

If after one year you can comfortably open an unfamiliar **1000–1300-rated problem**, analyze the constraints, identify plausible approaches, reason about complexity, and implement a solution without immediately reaching for an editorial, the year has been successful.

**The rating is the scoreboard. The thinking ability is the actual skill.**
