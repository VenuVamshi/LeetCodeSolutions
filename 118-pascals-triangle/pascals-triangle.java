class Solution {
    public List < List <Integer> > generate(int numRows) {
        List<List<Integer>> result = new ArrayList<>();//creating list of lists

        for(int i = 0; i < numRows; i++){//each iteration for each row
            List<Integer> row = new ArrayList<>();//each row is created

            //set first element always 1
            row.add(1);
            // for other elements we run another loop
            for (int j = 1; j < i; j++){//start from second ele and fill till 2nd last elemet(which inedex is i-1) cause i th row has i+1 elements where j0 is first done and j = i-1 is last and when j = i {klast } exit loop
                int val = result.get(i-1).get(j) + result.get(i-1).get(j-1);

                row.add(val);
            }
            if(i>0)//fill lat elemnt for after first row
                row.add(1);
            
        result.add(row);
            
                    
        }
    return result;

    }
}