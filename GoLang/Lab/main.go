package main

// Hello word
// func main() {
// 	fmt.Println("Hello, Golang!")
// }

// Sum
// func sum(a int, b int) int {
// 	return a + b
// }

// func main() {
// 	a := sum(1, 2)
// 	println(a)
// }

// check number is prime

// func isEven(n int) bool {
// 	return n%2 == 0
// }

// func main() {
// 	println(isEven(2)) // true
// 	println(isEven(3)) // false
// }

//  sum Array
// func sumArray(arr []int) int {
// 	total := 0
// 	for _, num := range arr {
// 		total += num
// 	}
// 	return total
// }

// func main() {
// 	arr := []int{1, 2, 3, 4, 5}//15
// 	println(sumArray(arr))
// }

//  check number is prime
func isPrime(n int) bool {
	for i := 2; i < n; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}

func main() {
	println(isPrime(7))
	println(isPrime(8))
}
