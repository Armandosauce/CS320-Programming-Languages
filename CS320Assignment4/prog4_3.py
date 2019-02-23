from prog4_1 import *
from prog4_2 import *

if __name__ == "__main__":
  print("Assignment #4-3, Armando Perez, armandoperez0001@gmail.com") 
  
  with open(sys.argv[1]) as f:
    content = f.readlines()
  content = [x.strip() for x in content]
  
  inputtokens = []
  
  for i in range(0,len(content)):
    tokens = Tokenize(content[i])
    inputtokens.append(tokens)
  
  for i in inputtokens:
    Parse(i)
  
  machine = StackMachine()
  
  while(machine.CurrentLine < len(inputtokens)):
    output = machine.Execute(inputtokens[machine.CurrentLine])
    if (not output == None):
      print(output)
      
  print("Program terminated correctly")
