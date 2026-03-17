#!/usr/bin/env bats

@test "Test 1 largest area" {
run bash -c "printf '3\n10\n5\n4\n5\n2\n3\n' | ./demo3"
[[ "$output" == *"Largest rectangle area: 50.00"* ]]
}

@test "Test 2 largest area" {
run bash -c "printf '3\n2\n3\n10\n5\n4\n4\n' | ./demo3"
[[ "$output" == *"Largest rectangle area: 50.00"* ]]
}

@test "Test 3 largest area" {
run bash -c "printf '3\n2\n3\n4\n4\n10\n5\n' | ./demo3"
[[ "$output" == *"Largest rectangle area: 50.00"* ]]
}