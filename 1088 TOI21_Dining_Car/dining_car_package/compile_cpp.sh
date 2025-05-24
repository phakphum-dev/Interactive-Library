#!/bin/bash

problem="dining_car"
grader_name="grader"

g++ -std=gnu++17 -O -Wall -pipe -static -o "${problem}" "${grader_name}.cpp" "${problem}.cpp"

