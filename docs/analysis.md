| TESTS | RESULTS | FIX |
| ------------------ |--------------------| -------------------| 
| if getFront or removeFront function is called on an empty list 	       	| seg fault       		     		 | check for NULL 			 				| 
| if destroy function is called more than once                   	       	| program crashes 		     		 | destroy and exit together 				| 
| if array are too big or too small                                			| overflow          				 | can't take too big or too small numbers	| 
| if any function is sent a bad pionter                          			| seg faults         				 | keep track of pointers  		 			| 
| checking for memory leaks using Valgrind                       		 	| no leaks found     			 	 | no fix needed   							| 
| if double or float is sent                                    			| number truncated   				 | cannot take decimals, send only int   	|
