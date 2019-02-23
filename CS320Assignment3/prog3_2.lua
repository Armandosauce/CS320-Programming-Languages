function InfixToPostfix(str)

  print("Assignment #3-2, Armando Perez, armandoperez0001@gmail.com")

  operations = {}
	
  args = {}
  i = 0
	
  for character in str:gmatch("%S+") do
    if (character == "*" or character == "/" or character == "-" or character == "+") then
	  if (operations == nil) then
	      table.insert(operations, 1, character)
	  elseif(character == "+" or character == "-") then
	      while(operations[1] == "*" or operations[1] == "/") do
	        operation = table.remove(operations, 1)
	        table.insert(args, operation)
	      end
	    
	      table.insert(operations, 1, character)
	  elseif(character == "*" or character == "/") then
	    while(operations[1] == "*" or operations[1] == "/") do
	        operation = table.remove(operations, 1)
	        table.insert(args, operation)
	    end
	    table.insert(operations,1,character)
      else
        table.insert(args, character)
      end
  
    else
      table.insert(args, character)
    end
    i = i + 1
  end

	
	while operations[1] do
		table.insert(args,table.remove(operations,1))
	end
	
	postfix = args[1]
	
	for j = 2, i do
		postfix = postfix.. " " .. args[j]
	end
	
	print(postfix)
	
	return postfix
	
end
	
	
	
	
	
