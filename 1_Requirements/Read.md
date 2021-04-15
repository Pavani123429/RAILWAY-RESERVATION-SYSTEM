# Railway Management System 

# Introduction:-

## What is Railway Management System ?
In Railway Management System, we need to sort the various train details into a particular order in order to maintain it in a organised form. So firstly we take all the input details required from the passengers and then sort all the details accordingly. First module includes sorting train numbers using bubble sort. Second module includes sorting train names using selection sort. Third module includes sorting passenger names using insertion sort. And last module includes sorting PNR numbers using quick sort.

## Objectives Of Project:-

The purpose of this project is to develop “Railway Management System” which takes all the customer details and travel details as input and sorts all the information using various sort to arrange them in an organized manner.
This code is basically written as a solution to the drawbacks of existing problems of arranging things in a particular order. This application can be used as a real world application and by any organization.

# Benefits
Railway Management System enables the customer details and travel details as input and sorts all the information using various sorts to arrange them in an organized manner.

# Effective Management
This system is effective, saves time of management. Thus, it saves organization resources and expenses.




# Defining System:-

<img src="https://github.com/Sowmika26/Miniproject/blob/main/Requirements/system%20design.png">

# Explanation:-
  ## Railway Management has some features.

Management selects the case which they want(Case 1: Train numbers using Bubble Sort Algorithm Case 2:Train names using Selection sort algorithm, Case 3: passenger names using Insertion Sort algorithm, Case 4: PNR numbers using Quick Sort algorithm)the train details are sorted according to selected case 


# SWOT Analysis:
  <img src="https://github.com/Sowmika26/Miniproject/blob/main/Requirements/SWOT%20Analysis.png">


# 4W's and 1'H
   
   ## Who:
          Railway Management System is a software solution by providing organized form. This system is used for any kind of train details into a particular order in order to maintain it in a organized form 
    
   ## What:
           It is helpful for the management to save time.
   
   ## When:
           The Railway Management System is now used in Railway department for easy sorting 
   
   ## Where:
        Face the issues in collection of train details.
   ## How:
         This issue can be solved by requesting any proof i.e ticket.
         
       
# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Management should be able to enter Train names | Techincal | TBD-S1 | 
| HR02 | Management should be able to enter Passenger names | Techincal | TBD-S1 |
| HR03 | Management should be able to enter PNR numbers | Techincal | TBD-S1 |
| HR04 | Management should be able to enter Train numbers | Techincal | TBD-S1 |
| HR05 | Management should be able to select the sorting | Techincal | TBD-S1 |
| HR06 | cilent shall be able to read data from a file | Techincal | TBD-S1 |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should be stored when closing the system | Scenario | TBD-S1 |
##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record is added and Employee id should be unique| HR01 | TBD-S1 |
| LR02 | Finding the Employee details can be either by searching by name or the best way of searching is by Employee id | HR02 | TBD-S1 |
| LR03 | If user searches for an invalid ID ""ERROR RECORD NOT FOUND" message should be displayed | HR02 | TBD-S1 |
| LR04 | User need to search by the Employee id for the details to be updated, if no record is available then "ERROR RECORD NOT FOUND" Message should be displayed | HR02 | TBD-S1 |
| LR06 | User need to search by id for the Employee record to be deleted, if no such record is available then "ERROR RECORD NOT FOUND" Message should be displayed | HR04 | TBD-S1 |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR06 | TBD-S1 |
| LR06 | If opening the login page fails system shloud prompt the message "Invalid login" | HR07| TBD-S1 |
| LR07 | After adding each record  it asks whether you need to add an another record or Not and Display message as "Y/N" if want to add/modify/delete another record can click Y/N| HR01,HR02,HR03,HR04 | TBD-S1 |

