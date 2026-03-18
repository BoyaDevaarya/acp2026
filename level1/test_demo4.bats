#!/usr/bin/env bats

@test "Flight found case 1" {
run bash -c "printf '101\nDelhi\n50\n102\nMumbai\n40\n103\nChennai\n30\n104\nDelhi\n20\nDelhi\n' | ./demo4"

[[ "$output" == *"Flight found: 101"* ]]
[[ "$output" == *"Flight found: 104"* ]]
}

@test "Flight found case 2" {
run bash -c "printf '201\nGoa\n25\n202\nPune\n30\n203\nDelhi\n10\n204\nBangalore\n15\nDelhi\n' | ./demo4"

[[ "$output" == *"Flight found: 203"* ]]
}

@test "No flight found" {
run bash -c "printf '301\nGoa\n25\n302\nPune\n30\n303\nChennai\n10\n304\nBangalore\n15\nHyderabad\n' | ./demo4"

[[ "$output" == *"No flight found"* ]]
}