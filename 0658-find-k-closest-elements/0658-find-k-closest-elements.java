class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        List<Integer> res = new ArrayList<>();
    Map<Integer, List<Integer>> map = new HashMap<>();
    Set<Integer> dif = new TreeSet<>();
    
    // Populate the map with differences and corresponding numbers
    for (int num : arr) {
        int diff = Math.abs(num - x);
        map.putIfAbsent(diff, new ArrayList<>());
        map.get(diff).add(num);
        dif.add(diff);
    }

    // Collect the closest elements
    for (int diff : dif) {
        List<Integer> numbers = map.get(diff);
        for (int num : numbers) {
            if (res.size() < k) {
                res.add(num);
            }
        }
        if (res.size() >= k) {
            break;
        }
    }

    // Sort the result
    Collections.sort(res);
    return res;
        
    }
}