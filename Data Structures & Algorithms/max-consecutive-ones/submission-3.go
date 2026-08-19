func findMaxConsecutiveOnes(nums []int) int {
	max,current := 0,0
    for _,x := range nums {
        if x == 1 {
            current++
        }else{
            if current>max{
            max = current
        }
            current = 0
        }
        if current>max{
            max = current
        }
    }
    return max
}
