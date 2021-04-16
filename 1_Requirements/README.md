# Requirements

## Introduction

* The virtual cricket game is a single player game. This game refreshes the childood memories of hand cricket game which was played between two players.
* This project was choosen because it provides me an oppurtunity to implement and learn basic C programming concepts in a sporty way.

## Defining our project

The game consists of multiple functions required at each stage of the game. The game flow is defined:

![req_flow](https://user-images.githubusercontent.com/81741838/114581476-584a6080-9c9d-11eb-8fed-c705c29b2de3.png)

* The Game menu allows the player to choose to Begin playing or Quitting the game.
* When the player chooses to Play the game, the player is asked to define the number of overs they would want to play.
* The player enters their name and a toss is done which defines who would bat first and the game begins.
* The game ends when the player reaches the target or the number of overs finish.
* The results are displayed and the useer is asked whether they would like to play again.
* The user either chooses to Pla again or Quit. In case, the user chooses to play again, a fresh game begins.

## SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/81741838/114584532-68177400-9ca0-11eb-95fc-171f8ec4230f.PNG)

## 4 W's and 1 H 

### WHO

Applicable for users of all age groups. Anyone who seeks recreation and knows basic english and computer operation can play this game.

### WHAT

This is a gaming application developed keeping in mind a simple and quick game from childhood. Applicable only for a single player.

### WHEN

Whenever someone is bored and seeks recreation and has noone to play with.

### WHERE
A user can play this game during breaks or hobby hours.

### HOW

Any user can play this game using Personal computer, smartphone or laptop.

# Detail Requirements

## High level requirements

| ID | Description | Category | Status (Implemented/Future)|
|:--|:----------------------------------|:-----------------|:-------------------|
| HR.01 | System should allow the user to be able to access the main menu | Technical | Implemented |
| HR.02 | System should allow the user to set their username | Technical | Implemented |
| HR.03 | System should allow the user to enter the number of overs | Technical | Implemented |
| HR.04 | System should allow the user to choose toss sides and Batting or Bowling | Technical | Implemented |
| HR.05 | System should decide the winner on the basis of scores | Technical | Implemented |
| HR.06 | System should prompt the user to play again when one game ends | Technical | Implemented |
| HR.07 | System should allow multiple player mode | Technical | Future |

## Low level requirements

| ID | Description | HRID | Status (Implemented/Future) |
|:--|:----------------------------------|:------|:-------------------|
| LR.01 | User shall be able to access the main menu from where they can go ahead with the game or exit. | HR.01 | Implemented |
| LR.02 | User shall be able to choose a unique username with which they will be recognised in the game. | HR.02 | Implemented |
| LR.03 | User shall be able to choose and fix the number of overs according to their convinience. | HR.03 | Implemented |
| LR.04 | User shall be able to choose their coin side for toss. In case the user wins, the system should prompt the user to select batting or Bowling. In case the user looses the toss, the system must, by itself, select to either bat or bowl and then prompt the user what role they would be doing.  | HR.04 | Implemented |
| LR.05 | The system should add all the scores on each ball and compare user's and system scores in the end and display the results. | HR.05 | Implemented |
| LR.06 | Once the game ends, the system shall prompt the user to play again or quit the game console. | HR.06 | Implemented |
| LR.07 | The system shall support single player and multiplayer modes | HR.06 | Future |



