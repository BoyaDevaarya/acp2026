#!/usr/bin/env bats

@test "Strings equal" {
run bash -c "printf 'abc\nabc\n' | ./demo7"

[[ "$output" == *"Result: 0"* ]]
}

@test "First string greater" {
run bash -c "printf 'bcd\nabc\n' | ./demo7"

[[ "$output" == *"Result: 1"* ]]
}

@test "Second string greater" {
run bash -c "printf 'abc\nbcd\n' | ./demo7"

[[ "$output" == *"Result: -1"* ]]
}