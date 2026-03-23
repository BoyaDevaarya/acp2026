#!/usr/bin/env bats

@test "Basic concatenation" {
run bash -c "printf 'Hello\nWorld\n' | ./demo8"

[[ "$output" == *"Concatenated string: HelloWorld"* ]]
}

@test "Numbers and letters" {
run bash -c "printf 'abc\n123\n' | ./demo8"

[[ "$output" == *"Concatenated string: abc123"* ]]
}

@test "Same strings" {
run bash -c "printf 'test\ntest\n' | ./demo8"

[[ "$output" == *"Concatenated string: testtest"* ]]
}