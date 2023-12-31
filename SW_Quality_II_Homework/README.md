# Clean Code: Homework 2

In the last session we learned about the first SOLID principles. In this exercise we want to deepen this knowledge by a analogy to some vehicles that either drive on road or rails.

## The Self Driving System Problem

You are part of a software development team that has produced a very well Self Driving System for cars. 
The system is being used successfully in cars, so it is not surprising that other industries are also taking notice. You are being contacted by a developer from the railway industry as he likes to use your module.

To "use" the Self Driving System we inherit from it:

```
class Car:
    Inherits Self DrivingSystem
```

The Interface we designed looks like this:

```
Interface SelfDrivingSystem:
        Abstract Method goForward() 
        Abstract Method goBackward()
        Abstract Method turnLeft()
        Abstract Method turnRight()
        
```

The railway developer came up with the idea of using the SelfDrivingSystem as a base because:

![UML](./uml_idea.png)

This looking like a good idea in first place turns out be problematic as trains cannot turn left or right due to the fact that they are on rails.

<img src="./inheritance_smell.png" width=50% height=50%>

## Your Tasks
1. Read and understand the following pseudocode: [inheritance_smell.pseudo](./inheritance_smell.pseudo) 
2. What rule is violated when a child class removes _features_ from the base class it inherits from?
3. What principle could you think of to fix the issue and why?
4. Refactor the code ([inheritance_smell.pseudo](./inheritance_smell.pseudo)) accordingly.


