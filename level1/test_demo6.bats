#!/usr/bin/env bats

@test "Dynamic array test 1" {
run bash -c "printf '3\n1 2 3\n' | ./demo6"

[[ "$output" == *"Array elements: 1 2 3"* ]]
[[ "$output" == *"Memory deallocated successfully"* ]]
}

@test "Dynamic array test 2" {
run bash -c "printf '5\n10 20 30 40 50\n' | ./demo6"

[[ "$output" == *"Array elements: 10 20 30 40 50"* ]]
[[ "$output" == *"Memory deallocated successfully"* ]]
}