{"filter":false,"title":"mario.py","tooltip":"/pset6/mario/less/mario.py","undoManager":{"mark":0,"position":0,"stack":[[{"start":{"row":0,"column":0},"end":{"row":29,"column":10},"action":"insert","lines":["from cs50 import get_int","","","def main():","    height = get_height(\"Height: \")","    draw_half_pyramid(height)","","","# Prompt user for a valid input","def get_height(prompt):","    while True:","        h = get_int(prompt)","        # Valid input must be between 1 and 8 (inclusive)","        if h > 0 and h < 9:","            break","    return h","","","# Draw half a pyramid of hashes","def draw_half_pyramid(rows):","    # For each row, do:","    # Add a start argument to range (don't wanna start at 0)","    # Thus, increase by one the amount of rows","    for row in range(1, rows + 1):","        # Print half pyramid, spaces + hashes","        print(\" \" * (rows - row) + \"#\" * row)","","","if __name__ == \"__main__\":","    main()"],"id":1}]]},"ace":{"folds":[],"scrolltop":228.5,"scrollleft":0,"selection":{"start":{"row":29,"column":10},"end":{"row":29,"column":10},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":15,"state":"start","mode":"ace/mode/python"}},"timestamp":1597030422250,"hash":"a937ab85581e166ad0a8c746132623f7540f852d"}