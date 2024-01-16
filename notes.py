from icecream import ic
""" 
Covered topics are 

1. Basic data structures
2. Big O notation
3. Searching Algorithms
4. Sorting algorithms
5. Graphs


What is a data structure?
 Data structure is a named location that can be used to store and organize data


What is a algorithms?
 It is a collection of steps to solve a problem



 """

# what is linked list
# linked list is a form of sequential collection and it does not have to be in order. A linked list is made up of independent nodes htat may contain any type of data and each node has a reference to the next node in the link
# Types of Linkedlist -> Singly linked list -> Circular Single Linked List -> Doubly Linked List -> Circular Double Linked List
'''

class Node:

    def __init__(self, data):
        self.data = data
        self.next = None
        ic(data)
        ic(next)

class LinkedList:
    def __init__(self):
        self.head = None

    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")
        ic(" -> ".join(nodes))


node = Node(4)
node = Node(6)
'''

