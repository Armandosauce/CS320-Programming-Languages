import sys

class StackMachine:
  def __init__(self):
    self.CurrentLine = 0
    self._stack = []
    self.__saved = [None] * 100000
    self._tokens = []
  def _push(self, x):
    self._stack.append(x)
  def _pop(self):
    if (len(self._stack) <= 0):
      raise IndexError("Line " + str(self.CurrentLine) + str(self._tokens) + "Invalid Memory Access")
    return self._stack.pop(len(self._stack)-1)
  
  def Execute(self, tokens):
    self._tokens = tokens
    cmd = tokens[0]
    
    if (cmd == "push"):
      self._push(tokens[1])
      
    elif (cmd == "pop"):
      self.CurrentLine = self.CurrentLine + 1
      return self._pop()
    
    elif (cmd == "add"):
      res = self._pop() + self._pop()
      self._push(res)
      
    elif (cmd == "sub"):
      res = self._pop() - self._pop()
      self._push(res)
      
    elif (cmd == "mul"):
      res = self._pop() * self._pop()
      self._push(res)
      
    elif (cmd == "div"):
      res = self._pop() / self._pop()
      self._push(res)
      
    elif (cmd == "mod"):
      res = self._pop() % self._pop()
      self._push(res)
      
    elif (cmd == "skip"):
      first = self._pop()
      second = self._pop()
      
      if(first == 0):
        self.CurrentLine = self.CurrentLine + second
        
    elif (cmd == "save"):
      self.__saved[tokens[1]] = self._pop()
      
    elif (cmd == "get"):
      value = self.__saved[tokens[1]]
      if(not value == None): 
        self._push(value)
      else:
        raise IndexError("Invalid Memory Access")
      
    self.CurrentLine = self.CurrentLine + 1
    return

