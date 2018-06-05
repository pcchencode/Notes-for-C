BinarySearch = function(a){
  sortdata = sort(data)
  low = 0
  high = length(sortdata) # the initial index for vector in R is 1.
  find = 0
  
  while(low <= high){
    middle = floor((low+high)/2)
    if (search < sortdata[middle]){
      high = middle - 1 
    }
    else if (search > sortdata[middle]){
      low = middle + 1
    }
    else if (search == sortdata[middle]){
      find = 1
      break
    }
  }
  return (find)
}

data <- c(43,5,1,2,54,6,7,4,82)
#cat("Please enter the searching number") # prompt
#search <- scan(n=1)
search <- 3

###########################################################
if (BinarySearch(data) ==0){
  print("cant find it :(");
} else # R在這邊很特別，else一定要接在if第二個的大括號後面
{
  print("find it :)");
}


