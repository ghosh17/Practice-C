//partition 

int partition( void *a, int low, int high )
  {
  int left, right;
  void *pivot_item;
  pivot_item = a[low];
  pivot = left = low;
  right = high;
  while ( left < right ) {
    /* Move left while item < pivot */
    while( a[left] <= pivot_item ) left++;
    /* Move right while item > pivot */
    while( a[right] > pivot_item ) right--;
    if ( left < right ) SWAP(a,left,right);
    }
  /* right is final position for the pivot */
  a[low] = a[right];
  a[right] = pivot_item;
  return right;
  }

