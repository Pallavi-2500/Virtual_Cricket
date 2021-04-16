# Test Plan

## High level Test Plan
| Test ID | Description | Exp o/p | Exp i/p | Actual o/p | Type of test |
| :---- | :---- | :---- | :---- | :---- | :---- |
| HR.01 | Check if user is able to choose an option from given options | User is able to choose | - | - | technical |
| HR.02 | Check if user is able to enter their username | User is able to enter the username | - | - | technical |
| HR.03 | Check if user is able to enter their batting/bowling scores | User is able to enter valid scores (ranging 1-6) | - | - | Scenario based |
| HR.04 | Check if system is able to provide results | System provides results | - | - | technical |

## Low level Test Plan
| Test ID | Description | Exp o/p | Exp i/p | Actual o/p | Type of test |
| :---- | :---- | :---- | :---- | :---- | :---- |
| LR.01 | Check if user shall is able to access the main menu from where they can go ahead with the game or exit. | Game starts, menu 2 opens | User enters 1 | - | technical |
| LR.02.1 | Check if user is able to choose and fix the number of overs according to their convinience | Game with unlimited overs begins | user enters 1 | - |technical |
| LR.02.2 | Check if user is able to choose and fix the number of overs according to their convinience | Game with limited overs is selcted | user enters 2 | - |technical |
| LR.03 | Check if system is able to add all the scores on each ball and compare user's and system scores in the end and display the results. | Results show match draw | Match draw | - | Scenario based |
| LR.04.1 | Check if system is able to prompt the user to play again or quit the game console. | Game Quits | user enters 2 | - | Scenario based |
| LR.04.2 | Check if system is able to prompt the user to play again or quit the game console. | Game begins again | user enters 1 | - | Scenario based |
