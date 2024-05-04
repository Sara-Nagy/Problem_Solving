def split_and_join(line):
    line =line.split() #line is a list now
    line= "-".join(line) #line is a string now
    return line

line = input()
result = split_and_join(line)
print(result)