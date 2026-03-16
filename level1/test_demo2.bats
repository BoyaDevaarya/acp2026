#!/usr/bin/env bats

@test "Rectangle 1 largest" {
run bash -c "printf 'R1\n10\n5\nR2\n4\n5\nR3\n2\n3\n' | ./demo2"
[[ "$output" == *"Largest rectangle is: R1"* ]]
[[ "$output" == *"Area: 50.00"* ]]
}

@test "Rectangle 2 largest" {
run bash -c "printf 'A\n2\n3\nB\n10\n5\nC\n4\n4\n' | ./demo2"
[[ "$output" == *"Largest rectangle is: B"* ]]
[[ "$output" == *"Area: 50.00"* ]]
}

@test "Rectangle 3 largest" {
run bash -c "printf 'A\n2\n3\nB\n4\n4\nC\n10\n5\n' | ./demo2"
[[ "$output" == *"Largest rectangle is: C"* ]]
[[ "$output" == *"Area: 50.00"* ]]
}