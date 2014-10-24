
\function{rearrange}
\synopsis{Rearrange the elements of a 1-d array or list.}
\usage{rearrange (A, indices)}
\description
  This function performs an in-place rearrangment of the the elements
  of an array according to the specified permutation, represented by
  the \exmp{indices} argument.  The \exmp{indices} array is assumed to
  contain unique integers in the range \exmp{[0,length(A)-1]}.
\notes
  The function modifies the elements of the \exmp{indices} array while
  it performs the rearrangement.  The values will get restored upon
  return from function.

  The algorithm used was derived from the DPPERM function, which is
  part of the SLATEC package.  See
  \url{http://gams.nist.gov/cgi-bin/serve.cgi/Package/SLATEC}.
\seealso{array_reverse, array_swap}
\done

\function{reverse}
\synopsis{Reverse the elements of a 1-d array}
\usage{Array_Type reverse (Array_Type A)}
\description
 The \sfun{reverse} function reverses the elements of a 1-d array and
 returns the result.
\seealso{shift}
\done

\function{shift}
\synopsis{Shift the elements of a 1-d array}
\usage{Array_Type shift (Array_Type A, Int_Type n)}
\description
 The \sfun{shift} function shifts the elements of an array by a specified amount
 and returns the result.  If \exmp{n} is positive, the ith element of the array
 will be shifted to the position \exmp{i-n} of the array.  Elements for
 which \exmp{i-n} is less than 0 will be moved to the end of the array.
\example
#v+
   A = [1,2,3,4,5,6,7,8,9];
   B = shift (A, 3);          % ==> B = [4,5,6,7,8,9,1,2,3];
   C = shift (A, -1);         % ==> C = [9,1,2,3,4,5,6,7,8];
#v-
\notes
 It many ways \exmp{rotate} would be a better name for this function.
\seealso{reverse, transpose}
\done
