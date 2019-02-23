
validtokens = ["pop", "add", "sub", "mul", "div", "mod", "skip", "push", "save", "get"]

def Tokenize(s):
  sp = s.split()
  tokens = []
  
  for i in range(0, len(sp)):
    try:
      if (sp[i] in validtokens):
        tokens.append(sp[i])
      elif (int(sp[i]) or sp[i] == "0"):
        tokens.append(int(sp[i]))
    except:
      raise ValueError("Unexpected Token: " + sp[i])
  
  return(tokens)
    
    
def Parse(tokens):
  if (len(tokens) == 1):
    for i in range(0,7):
      if (tokens[0] == validtokens[i]):
        return True
  elif (len(tokens) == 2):
    if(tokens[0] == "push" or tokens[0] == "save" or tokens[0] == "get"):
      if (int(tokens[1]) or tokens[1] == 0):
        return True
  raise ValueError("Parse error: " + str(tokens));
        
