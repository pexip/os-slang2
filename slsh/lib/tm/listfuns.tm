\function{list_sort}
\synopsis{Sort a list of item}
\usage{
#v+
   Int_Type indices = list_sort (List_Type list);        % Form 1
   list_sort (List_Type list; inplace);                  % Form 2
#v-
}
\description
  The \sfun{list_sort} may be used to sort a list.  By default, it
  returns a permutation index array for the desired sort.  If the
  \exmp{inplace} qualifier is given, the sort will be in-place and no
  index array will be returned.
\qualifiers
  The following qualifiers may be used to modify the behavior of the
  function:

#v+
    dir=1
#v-
  If the value of the \exmp{dir} qualifier is non-negative, the sort will
  take place in an increasing order.  If negative, the list will be
  sorted in decreasing order.

#v+
    cmp=&cmpfunc
#v-
  The \exmp{cmp} qualifier specifies the function used to comparison
  operation for two elements of an array.  Its value must be a
  reference to a function that accepts two arguments representing the
  objects to be compared.  It must return a positive integer, 0, or
  a negative integer if the value of the first argument is greater
  than, equal to, or less than the value of the second, respectively.

#v+
    inplace[=1]
#v-
  The inplace qualifier may be used to indicate if the list is to be
  sorted in place.  If the qualifier is present with no-value or a
  non-zero value, the list will be sorted in place and no index array
  will be returned.  If not present, or present with a value of 0, the
  list will not be modified, and an index array will be returned.
\example
#v+
   list = {1, 9, 3, 7};
   i = list_sort (list);
   sorted_list = list[i];
#v-
  The above example creates a second list (\exmp{sorted_list}) by
  using the permutation index array to rearrange the objects in the
  unsorted list.

#v+
   list = {1, 9, 3, 7};
   list_sort (list; inplace);
#v-
  In this example, the list is sorted in-place.

   Consider a list of strings that are to be sorted in increasing
   order of the number of bytes used by each string.  For this, a custom
   sort function is required:
#v+
    private define cmpfunc (a, b)
    {
       return strbytelen(a) - strbytelen(b);
    }
    list = {"Here", "is", "a", "list", "of", "strings"};
    list_sort (list; inplace);
#v-
\notes
  Keep in mind that a list can contain a heterogeneous collection of
  object where there is no predefined comparison operation.  For
  example, there may be no natural way to compare an integer to a
  string.  For a heterogeneous list, a comparison function must be
  provided.
\seealso{array_sort, rearrange}
\done

\function{heap_new}
\synopsis{Instantiate a heap data object}
\usage{Struct_Type h = new_heap (List_Type list)}
\description
  The \sfun{new_heap} function takes a \dtype{List_Type} object and
  rearranges its elements to form a heap.  A list rearranged to form a
  heap has the property that \exmp{list[i] >= list[2*i+j]}, where j=1 or 2,
  and i is the list index (from 0).

  Upon return, the elements of the list will be rearranged to have the
  heap property and a new container object (the heap) will be
  returned.  It may be manipulated using the method calls described
  below.
\qualifiers
#v+
   dir=-1
#v-
  The \exmp{dir} qualifier may be used to specify the direction of the
  heap.  The default (dir=-1) specifies a top-down ordering.  A
  bottom-up ordering corresponds to dir=1.

#v+
   cmp=&cmpfunc
#v-
  The \exmp{cmp} may be used to specify the function to be used when
  comparing elements of the list.  Its value must be a reference to a
  function that takes two parameters and returns a positive integer if
  the value of the first parameter is greater than the second, 0 if
  they are equal, or a negative integer if the first is less than
  the second.  For example, if the list consists of structures with
  fields called \exmp{lastname} and \exmp{firstname} that are to be
  used for ordering, then the desired function would look something
  like:
#v+
    define cmpfunc (a, b)
    {
       variable c = strcmp (a.lastname, b.lastname);
       if (c == 0) c = strcmp (a.firstname, b.firstname);
       return c;
    }
#v-
\methods
\method{length()}{Get the length to the heap}
\method{add(obj)}{Add a new object to the heap}
\method{remove()}{Remove the largest (for top-down) or smallest (for
   bottom-up) item from the heap and return its value.}
\method{peek()}{Get the largest (top-down) or smallest(bottom-up) item
   from the heap, but do not remove it.}

  Note that attempting to peek at or remove an item from an empty list
  will result in an \exc{IndexError} exception.
\example
  Suppose that merging two objects requires a time equal to the
  combined length of the objects.  For example, if the length of first
  is A and that of the second is B, then the time to merge the two
  will be A + B.  What is the minimum amount of time it takes to merge
  a list of N objects with lengths \exmp{\{L_k\}, k=0...N-1}?  The
  answer to this is very simple if a bottom-up heap is used.  The idea
  is to remove the two smallest objects from the heap, combine them
  and then add the result back to the heap.  Repeat this process until
  the heap is empty.  In the following, \exmp{list} is a list of the
  lengths of the objects to be merged.
#v+
     define compute_merge_time (list)
     {
        variable h = heap_new (list; dir=1);   % bottom-up heap
        variable a, b, c, t;
        a = h.remove (); t = 0;
        while (h.length())
          {
             b = h.remove ();
             c = a + b;
             t += c;
             h.add (c);
             a = h.remove ();
         }
       return t;
     }
#v-
\notes
  Generally speaking, a list will require the specification of a
  comparison function unless the list consists solely of elements that
  may be compared using the \exmp{>}, \exmp{<}, and \exmp{==} operators.
\seealso{list_sort, list_new}
\done
