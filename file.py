import re

x = "Khaled goes to school by bus"

def remove_white_spaces(x):
    y = re.sub(r' +', ' ', x)
    return(y)

remove_white_spaces("  this is    a looong sentenc         e")
