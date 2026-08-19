func findMaxConsecutiveOnes(nums []int) int {
	max,current := 0,0
    for i,x := range nums {
        if i!=0 && x == 1 {
            if nums[i-1] == x {current++} else {current = 1}
        }else if x == 1 {
            current++
        }
        if current>max{
            max = current
        }
    }
    return max
}
