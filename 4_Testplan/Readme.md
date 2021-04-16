# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if the Management selects an option from the available choices,if not from choice given it will break | SUCCESS| SUCCESS|Requirement based |
|  H_02       |Check if the Management selects an option from the available choices, and if yes they it will continue the case|Management's choice, an integer  |  SUCCESS|SUCCESS|Requirement based |
|  H_03       | if management selects case 1:Train numbers using Bubble Sort Algorithm,2:Train names using Selection sort algorithm,3:Passenger names using Insertion Sort algorithm,4:PNR numbers using Quick Sort algorithm|Management gives details as interger| PASS | SUCCESS|Technical
|  H_04       |It asks details of passengers and train like passenger name,train number|Management gives details as interger and charcter|SUCCESS|SUCCESS|Required based |
|  H_05       |Details are sorted according to selected case|Management choice as an integer|SUCCESS|SUCCESS|Required based  |

## Low level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |When choosing from the options, check if the input is valid or invalid|  Management's Choice|Invalid Message/ Invoke the process|SUCCESS|Scenario based |
|  L_02       |If valid fill the details of passengers and train like passenger name,train number |Management choice| SUCCESS|SUCCESS|Scenario based    |
|  L_03       |Details are sorted according to selected case|Management choice as an integer| SUCCESS|SUCCESS|SUCCESS|Scenario based    |
