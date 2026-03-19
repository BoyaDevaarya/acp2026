#!/usr/bin/env bats

@test "Swap arrays test 1" {
run bash -c "printf '3\n1 2 3\n4 5 6\n' | ./demo5"

[[ "$output" == *"Array 1 after swap: 4 5 6"* ]]
[[ "$output" == *"Array 2 after swap: 1 2 3"* ]]
}

@test "Swap arrays test 2" {
run bash -c "printf '4\n10 20 30 40\n1 2 3 4\n' | ./demo5"

[[ "$output" == *"Array 1 after swap: 1 2 3 4"* ]]
[[ "$output" == *"Array 2 after swap: 10 20 30 40"* ]]
}