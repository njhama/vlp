# Lesson 1: Introduction
- Artificial Intelligence
    : Synthetic intelligence in machines & field of research which aims to create it through the study & design of intelligent agents

- Symbol-System Hypothesis
    : Belief that intelligence can be studied through the design of intelligent agents
- Church-Turning Hypothesis
    : The premise of computing is that any type of computation can be carried out on a Turing Machine (AI is achievable by computers)

#### Assessing Intelligence of a Machine
1. Its actions
2. Its reasoning procedures

#### Instrumental Rationalility (Max Weber)
- Calculability
    - Results can be exact or apporximately calculated
- Having Intrinsic Reasons
    - Action is undertaken for intrisic reasons such such as virtue and beliefs
- Efficiency
    - Finding best means to achieve goals
- Predictability
    - Due to rules, regulations, and structure
- Control over uncertainties
- Conformation to conventinal wisdom or ingrained habituation

#### Espistemology
    Meaning knowledge or understanding

- Epistemic Rationality
    :    Achieving accurate beliefs about the world
        It invovles updating on receiving new evidence

#### Schools of AI
![test](/csci360/img/4.png)
1. Thinking Rationally
    - Believes in building espitemically rational agents
2. Acting Rationally
    - synthesis and analysis of computational agents that act intelligently
3. Thinking Humanly (turing test)
    - activities that we associate with human thinking
    - A computer could be said to “think” if a human interrogator could not tell it apart, through conversation, from a human being
4. Acting Rationally

#### Turing Test Critique 
- The Chinese Room Argument
    : Intelligent or human-like behavior does not imply having a mind or understanding
- Reductionism
    : Reduces intelligence to some form of functionality
        Remedy: Total Turing Test

- Total Turing Test :
    1. Natural Language Processing  
        : enables it to communicate successfully in english
    2. Knowledge Representation
        : to store what is knows or hears
    3. Automated Reasoning
        : To use the stored information to answer questions to draw new conclusions
    4. Machine Learning
        : To adapt to new circumstances and to detect and extrapolate patterns
    5. Computer Vision (Additional)
        : To perceive objects
    6. Robotics (Additional)
        : To manipulate objects and move about

#### Machines that maximize utility
- Rational: maximally acheiving pre-defined goals
- Goals are expressed in terms of the utility of outcomes
- Being rational means maximizing your expected utility

#### AGI
- Artificial General Intelligence (AGI): Hypothetical intelligecne of a machine that has the capacity to understand or learn any intellectual task that a human being can
- Tests for AGI
    - The Turing Test
    - The Coffee Test (Wozniak)
    - The Robot College Student Test (Goertzel)
    - The Employment Test (Nilsson)
** missing some **

#### Threats of AI
3 Difficulties
1. Possibility of initially-unnoticed routine but catastophic bugs in any software systems
2. Unintended behavior the firs ttime any software system encounters a new scenario
3. Dynamic Nature & Learning capabilities may give rise to new uninteded behaviours



### ... need to finish...


---
---
# Lesson 2: Intelligent Agents
### Agents and Environments
- Agents: entities that perceive the environment through sesnors and act upon the env through their actuators
    - ie: humans, robots, etc
- Percept: content an agents sensors are perceiving


#### Vacuum-cleaner World
![test](/csci360/img/5.png)
- Percepts : Location & Contents
- Actions : Left, Right, Vacuum, NoOp
![test](/csci360/img/6.png)



#### Rationality
- Rational Agent
    : Chooses whichever action maximizes teh expected value of the performance 

#### PEAS
- To Design a rational agent, we must specify the task evnironment
    - Performance Measure
    - Environment
    - Actuators
    - Sensors

- Example: Designing an automated taxi
    - Performance measure: safety, destination, profits, legality, comfort
    - Environment: US streets/freeways, traffic, pedesrians
    - Actuators: Steering, Accellerator, Brake, Horn, Speaker
    - Sensors: Video, Accelerometers, Gauges, Engine Sensors

#### Environment Types
- Observability: Sensors have access to the complete state of the environment each time
- Parital Observability: Sensors have access to some information about some of the state of the environment
- Single vs Multi-Agent: One or multi agents trying to maximize their performance(compete) or help other maximize their performance (cooperate)
- Deterministic vs Nondeterministic (Stochastic): Next of the environment completely determined by the current state and teh actions of the agent?
- Episodic vs Sequential: agent experience divided into atomic episodes. the next episdoe does not depend on the actions taken in previous examples (ie: Image analysis, Poker )
- Static vs Dynamic: Does the environment change when the agent is performing its actions
- Semidynamic: environment does not change with time but the agent's performance does
- Discrete vs Continuous: Are states of the environment, time, percepts and actions agent discrete or continuous variables? 
- Known vs Unknown: Does the agent know the laws of the environment? 
- Known: The outcomes for all actions are given

#### Agents
- Simple Reflex Agents 
    - Select actions on the basis of the curent percept, igoring the rest of the percept history
    - Condition-action rules
![test](/csci360/img/7.png)
- Reflex Agents with State
    - To handle partial observability: keep track of the part of the world you acnnot see now
![test](/csci360/img/8.png)
- Goal-based agents
    - Knowing something about the current state of the environment is not always enough to decide what to do 
    - The agent needs some sort of goal information
![test](/csci360/img/9.png)
- Utility-based agents
    - An internalization of the performance measure
    - An agent that chooses to maximizes its utility will be rational 
![test](/csci360/img/10.png)
- Learning agents
    - The performance element is responsible for selecting external actions
    - Input: percept. Output: action
    - The learning element uses feedback from the critic on how the agent is doing and determines how the perfomrance elemtn should be modified todo better in the future
    - The critic tells the learning element how well the agent is doing
    - Problem generator is responsible for suggesting actions that will lead to new and informative experiences
![test](/csci360/img/11.png)
#### Summary
- Agents interact with environments through actuators and sensors
- The agent function describes what the agent does in all circumstances
- The performance measure evaluates the environment sequence
- A perfectly rational agent maximizes expected performance
- Agent programs implement (some) agents functions
- PEAS descriptions define task environments
- Environment are catergorized along several dimensions:
    observable, deterministic, episodic, static, discrete, single-agent
- Several basic agent architectures exist:
    reflex, reflex with state, goal-based, utility-based, learning-based

---
---
# Lesson 3: Problem Solving via Search

### Problem Types
- Deterministic (fully observable) => single-state problems
    - agent knows which state it will be in
- Non-observable => conformant problem (sensorless)
    - agent has no idea where it is
- Non-deterministic and/or partailly observable => contingency
    - percepts provide new info abt current state
- Unknown state space => exploration 


### Examples

#### Romania
- Formulate Goal
    : Bucharest
- Formulate Problem:
    : States: various cities
    Actions: Drive between cities
- Find Solutions
    : Sequence of cities
        Arad, Sibiu, Fagaras, Bucharest
##### Romania Pic
![test](/csci360/img/12.png)

- Single-state problem formulation
A problem defined by four items:
    - Initial state: eg "At Arad"
    - Successor function S(x) = set of action-state pairs
        - Roads: Go to adjacent city with cost == distance
        - eg S(Arad) - {(Arad -> Zerind, Zerind),...}
    - Goal Test
        - Explicit: x = At Bucharest
        - Implicit NoDirt(x)
    - Path Cost (Additive)
        - Sum of distances, number of actions executed, etc
        - c(x,a,y) is the step cost

    **A solution is a sequence of actions leading from the initial to a goal state**

- State Space / Problem Space
    : the state space is a graph (X,A) with
        - X: the set of nodes (all states of a problem)
        - A subset X x X: the set of all edges, with (x,x`) element A iff state x' can be reached from state x by applying an operator s element S

#### Vacuum World State Space
![test](/csci360/img/13.png)

- States: interger dirt and roobot locations
- Actions: left, right, vacuum, noop
- Goal Test: No dirt
- Path Cost: 1 per action (0 for noop)

#### The 8-Puzzle
![test](/csci360/img/14.png)
- States: Integer locations of tiles
- Actions: Move blank left, right, up, down
- Goal Test: Goal State (given)
- Path cost: 1 per move


### Search Graphs & Search Trees
- Typical Problem: Agent is in ones state, has a set of deterministic actions, and wants to get to its goal state





##### Directed Graphs
- Consists of a set N of state-nodes and a set A of ordered pairs of state-nodes, called edges
- A path is a sequence of neighboring state-nodes
- The length of the path is k
- The number of state-nodes in it is k+1


##### Search Graphs vs Trees
- In a search graph, each state occurs only once
![test](/csci360/img/15.png)

#### State-node vs tree node
- 


### Search Strategies
    : Define by picking the order of tree-node expansion
    - Completeness: Does it always find a solution if one exists
    - Time Complexity: Number of nodes generated / expanded
    - Space Complexity: Max number of nodes in memory
    - Optimality: Does it always find a least-cost solution

#### Time and Cost Measurements
- b: branching factor
- d: depth of least-cost solution
- m: max depth of the state space (depth of search tree)


#### Uniformed Search Strategies
- BFS
- Uniform-cost search
- DFS
- Depth-limited search
- Iterative Deepneing search


###### BFS
- FIFO queue
![test](/csci360/img/16.png)
- Properties
    - Complete: Yes
    - Time: \(O(b^d)\) (Branching factor ^ Depth of least cost sol'n)
    - Space: \(O(b^d)\)
    - Optimal: Yes

##### DFS
- LIFO stack
![test](/csci360/img/17.png)
- Properties
    - Complete: Yes
    - Time: \(O(b^m)\) (branching factor ^ Max depth of state space)
    - Space: O(bm)
    - Optimal: 

##### Uniform Cost Search (Djikstras)
- Expand least cost unexpanded node
**ionsert photo**
Properties
- Complete: Yes
- Time: \(O(b^d)\) (Branching factor ^ Depth of least cost sol'n)
- Space: O(bd)
- Optimal: 

##### Itertive Deepening Search
- get DFS space advantage w/ BFS time advantage
![test](/csci360/img/18.png)
Properties
- Complete: Yes
- Time:
- Space: 
- Optimal: 


##### Comparison of Search Algorithms
![test](/csci360/img/19.png)









---
---
# Lesson 4: Informed Search
### BFS & Greedy

#### Runtime

### A* Search
    - f(n) = g(n) + h(n)
    - g(n) = cost to reach n
    - h(n) = estimated cost to goal from n
    - f(n) = estimated total cost of path thru n to goal

    - Take path lowest f(n) of leaf node
    - Uses an admissible heuristic (h(n) <= true cost from n)

### Admissible Heuristics
### Properties of A* Search
### Local Search & Iterative Improvements
#### Local Search
    Local Search Algorithms: Oerate by searching from a start state to neighbouring states
    Greedy Search: Can be turned into local search based on a huerisitc 


    Example: Traveling Salesperson Problem
### Gradient Based Algorithms
    ????










---
---
# Lesson 5: Adversarial Search (Game Trees & Minimax)
### Games Playing
### Types of Games
### Adversrial Search


---
---


# Lesson 6: Uncertainty Quantification using Probalistic Reasoning
### Nature of uncertainty
### Probability Theory for AI