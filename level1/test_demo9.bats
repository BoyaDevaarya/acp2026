#!/usr/bin/env bats

@test "File write and read test 1" {
run bash -c "printf '2\n1\nRam\n90\n2\nSam\n80\n' | ./demo9"

[[ "$output" == *"1 Ram 90.00"* ]]
[[ "$output" == *"2 Sam 80.00"* ]]
}

@test "File write and read test 2" {
run bash -c "printf '1\n10\nAmit\n75\n' | ./demo9"

[[ "$output" == *"10 Amit 75.00"* ]]
}