/**
 * Method: During a group of array digits, first we find out the min and max item,
 *         by formula "(max - min) / n" get the unit size divisor,
 *         by the divisor we compute all item's sort position which between the min and max,
 *         then items which on that computed position item right side and smaller, move to left.
 *         (default sort direction Left to Right)
 *
 * eg: int arr[] = {9, 1, 20};        min:1 max:20 diviser:(1+20)/3=7
 * computed position:  {1, 0, 2}      "(9-1)/7~=1, (1-1)/7=0, (20-1)/7~=2"
 * for position "1", it means the item "9" should be at index 1, equal "arr[1] = 9;",
 * we compare begin from the index value 1 to end, find the smaller than "9", then move to left,
 * each loop time same way.
 */

void jaysort(int arr[], int n)
{
	int min=0,max=0, i=0;
	for(i=0; i<n; i++) {//first find out the min & max item
		if(i==0 || arr[i]<min) min=arr[i];
		if(arr[i]>max) max=arr[i];
	}

	if(n<=2) {//if only 2 items just return the min and max
		if(n==2) { arr[0]=min; arr[1]=max; }
		return;
	}

	register double unit_size = (double)(max-min) / n; //compute the unit size and set to cpu register type

	int m=0, q=0, ni=0, temp=0;
	for(i=0; i<n; i++)
	{
		ni = (arr[i]-min) / unit_size;//compute the current item's index value
		if(ni>=n) ni=n-1;
		for(m=ni; m<n; m++) {//items which on the indexed item right side, require to bigger than the indexed one
			if(arr[m]<arr[i]) {//if found a smaller item than the indexed item, move to left
				for(q=m; q>0; q--) {
					if(arr[q]<arr[q-1]) {
						temp = arr[q-1];
						arr[q-1] = arr[q];
						arr[q] = temp;
						if(q<n-1 && arr[q]>arr[q+1]) {//by the way compare the next item
							temp = arr[q];
							arr[q] = arr[q+1];
							arr[q+1] = temp;
						}
					}
				}
			}
		}
	}

	for(i=0; i<n-1; i++) //check the lose items
	{
		if(arr[i]>arr[i+1]) {
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
}
