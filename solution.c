public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<>();     //make hashmap 
    for (int i = 0; i < nums.length; i++) {
        map.put(nums[i], i);       //hashmap assignment
    }
    for (int i = 0; i < nums.length; i++) {
        int complement = target - nums[i];       //traverse the map to find complement
        if (map.containsKey(complement) && map.get(complement) != i) {
            return new int[] { i, map.get(complement) };
        }
    }
    throw new IllegalArgumentException("No two sum solution");   //throw exception
}

