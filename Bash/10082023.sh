#!/usr/bin/bash

# user input (base64)
echo "Base 64 => "
read user_input

# decode
decoded_input = $(echo "$user_input" | base64 -d")

# output
echo "Decoded => $decode_input"
