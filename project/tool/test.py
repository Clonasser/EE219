import numpy as np
import ram_reader as rr


result = []

img = "/home/docker/workspace/2023EE219_LAB/projects/project/data/bin/save.bin"
addr = rr.parse_addr("0x80f00000")
addr_start = rr.parse_addr("0x80800000")
img_list = rr.read_img( img, addr, length=50*192, size=4, addr_start=addr_start)
j = 0
for i in img_list:
    result.append(rr.parse_bytes(i, 'int32')[0])
    # j += 1
    # if j == 96:
    #     print("\n")
    #     j=0

reference_result_file_path = "/home/docker/workspace/2023EE219_LAB/projects/project/data/npy/result.npy"
golden_result = np.load(reference_result_file_path)


for i in range(10):
    for j in range(96):
         assert result[i*96+j] == golden_result[i][j],"Value does not match"

divider = "-" * 50


print(divider)

print("Summary".center(50))

print(divider)

print(f"Reference result file path: {reference_result_file_path}")

print(golden_result)
print(divider)
print(f"Calculation result file path: {img}")

for i in range(10):
    for j in range(96):
         print(result[i*96+j], end=" ")
    print("")
    
print(divider)
print("\033[92m","Comparison successful!".center(50),"\033[0m")

print(divider)

print("simulation result".center(50))

print(divider)

print("\033[92m","Correct! Calculate error free!".center(50),"\033[0m")

print(divider)


