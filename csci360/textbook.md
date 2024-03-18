# Textbook Notes

## Introduction and History of AI (Ch 1)
### 1.1.1



## Intelligent Agents (Ch 2)

---
## Problem Solving via Search (Ch 3.1 - Ch 3.4)
Problem-solving agent
    : goal-based agent

Informed Search Algo
    : somehting 

---
#### Problem Definition
1. Initial State
    : Where the agent starts
    *In(Arad)*
2. Actions
    : What the agent can do next
    *ACTIONS(S) = {Go(Sibiu), Go(Timisoara), Go(Zerind)}.*
3. Transition Model
    : Description of what each agent does
    *RESULT(s,a) = RESULT(In(Arad),Go(Zerind)) = In(Zerind)*
4. Goal Test
    : Determines whether a given state is a goal state
    *GOAL = {In(Bucharest)}*
5. Path Cost
    : Assigned a numeric cost to each path
    *COST = c(state, action, reach state) = c(s,a,s')*

![test](/csci360/img/1.png)


---
##### Example Problem #1
![test](/csci360/img/2.png)
- State
    : Determined by the agent location and the dirt locations
1. Initial State
    : Any state can be the inital one
2. Actions
    : L,R,Suck
3. Transition Model
    : As expected
4. Goal Test
    : Checks if all squares are clean
5. Path Cost
    : Each step costs 1

##### Example Problem #2
![test](/csci360/img/3.png)
- State
    : Location of 8 tiles and blank one
1. Initial State
    : Any state
2. Actions
    : Blank Space L,R,U,D
3. Transition Model
    : Returns the resulting state
4. Goal Test
    : Checks if in in order pattern
5. Path Cost
    : Each step costs 1

#### Example Problem #3 
Airline travel planning system

- State
    : Location & current time
- Initial State
    : Based on user's query
- Actions
    : Take any flight from current location, leaving after that current time
- Transition Models
    : State resulting from taking a flight
- Goal test
    : Check if we are at final destination
- Path cost
    : Monetary, Waiting time, flight time, etc

### Uninformed Search Strategies (3.4)
- BFS
    : root node expanded first
- Uniform Cost Search
    : test
- DFS
    : expands deepest node
- Depth-limited Search
    : something

## Search in Complex Environments (Ch 3.5 - Ch 3.6, Ch 4.1 - Ch 4.2)

### Informed (Heuristic) Search Strategies (3.5)
- Greedy BFS
- A* 

### Local Search Algorithms & Optimization Problems (4.1)
#### Hill Climbing Search



## Adversarial Search and Games (Ch 5.1 - Ch 5.3)

## Review of Probability Theory (Ch 12.1 - 12.5)

## Decision Theory (Ch 16.1 - 16.5)

## Agents that Learn from Experience and Data (Ch 19.1 - Ch 19.2, 19.4, 19.9)

## Classification (Ch 19.7.3)

## Classification (Ch 12.6)

## Regression (Ch 19.6.1 - 19.6.3, 19.7.4)

## Decision Trees (Ch 19.3)


## More stuff...