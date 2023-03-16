#!/bin/bash
echo "Size of char: $(sizeof char), Size of int: $(sizeof int), Size of long int: $(sizeof long int), Size of long long int: $(sizeof long long int), Size of float: $(sizeof float), Size of double: $(sizeof double), Size of long double: $(sizeof long double)" | tr -d '\n'
