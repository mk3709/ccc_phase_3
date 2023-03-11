

def arrange(sentence):
    new_str=''
    new_sentence=sentence.split()
    length=len(new_sentence)
    
    first_before=new_sentence[0]
    last_before=new_sentence[length-1]
    
    last_before=last_before.replace(".","")
    first_before=first_before[0].lower()+first_before[1:]
    
    new_sentence[0]=first_before
    new_sentence[length-1]=last_before
    
    new_sentence=sorted(new_sentence,key=len)
    
    first_after=new_sentence[0]
    last_after=new_sentence[length-1]
    
    first_after=first_after.capitalize()
    last_after+=('.')
    
    new_sentence[0]=first_after
    new_sentence[length-1]=last_after
        
    
    for i in new_sentence:
        new_str+=i
        new_str+=' '
        
        
    return new_str
    
