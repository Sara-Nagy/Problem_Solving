def mutate_string(string, position, character):
    # the first way:
    # L=list(string)
    # L[position]=character
    # string=''.join(L)

    #second way
    string=string[0:position] +character+string[position+1:]
    
    return string

if __name__ == '__main__':
    #the string to be changed
    s=input()
    #the position of the character ,the character to put instead of
    pos,char=input().split()
    new_str= mutate_string(s,int(pos),char)
    print(new_str)