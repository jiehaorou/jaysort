# Jayho's sorting solution
Algorithm for quickly sort a group of digits


Method:

        During a group of array digits, first we find out the min and max item,

        by formula "(max - min) / n" get the unit size divisor,

        by the divisor we compute all item's sort position which between the min and max,

        then items which on that computed position item right side and smaller, move to left.
        (default sort direction Left to Right)

eg: int arr[] = {9, 1, 22};        min:1 max:21 diviser:(22-1)/3=7,

computed position:  {1, 0, 3}      "(9-1)/7~=1, (1-1)/7=0, (22-1)/7~=3",

for position "1", it means the item "9" should be at index 1, equal "arr[1] = 9;",

we compare begin from the index value 1 to end, find the smaller than "9", then move to left,

each loop time same way.



Files:

       "main.c": main file for test

       "jaysort.c": v1 original idea version (2200 items spend 0.016 sec)

       "supersort.c": v2 super high speed version (2 million items spend <0.2 sec)


