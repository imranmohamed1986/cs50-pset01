{"filter":false,"title":"helpers.py","tooltip":"/pset8/helpers.py","undoManager":{"mark":1,"position":1,"stack":[[{"start":{"row":0,"column":0},"end":{"row":60,"column":27},"action":"insert","lines":["import os","import requests","import urllib.parse","","from flask import redirect, render_template, request, session","from functools import wraps","","","def apology(message, code=400):","    \"\"\"Render message as an apology to user.\"\"\"","    def escape(s):","        \"\"\"","        Escape special characters.","        https://github.com/jacebrowning/memegen#special-characters","        \"\"\"","        for old, new in [(\"-\", \"--\"), (\" \", \"-\"), (\"_\", \"__\"), (\"?\", \"~q\"),","                         (\"%\", \"~p\"), (\"#\", \"~h\"), (\"/\", \"~s\"), (\"\\\"\", \"''\")]:","            s = s.replace(old, new)","        return s","    return render_template(\"apology.html\", top=code, bottom=escape(message)), code","","","def login_required(f):","    \"\"\"","    Decorate routes to require login.","    http://flask.pocoo.org/docs/1.0/patterns/viewdecorators/","    \"\"\"","    @wraps(f)","    def decorated_function(*args, **kwargs):","        if session.get(\"user_id\") is None:","            return redirect(\"/login\")","        return f(*args, **kwargs)","    return decorated_function","","","def lookup(symbol):","    \"\"\"Look up quote for symbol.\"\"\"","","    # Contact API","    try:","        api_key = os.environ.get(\"API_KEY\")","        response = requests.get(f\"https://cloud-sse.iexapis.com/stable/stock/{urllib.parse.quote_plus(symbol)}/quote?token={api_key}\")","        response.raise_for_status()","    except requests.RequestException:","        return None","","    # Parse response","    try:","        quote = response.json()","        return {","            \"name\": quote[\"companyName\"],","            \"price\": float(quote[\"latestPrice\"]),","            \"symbol\": quote[\"symbol\"]","        }","    except (KeyError, TypeError, ValueError):","        return None","","","def usd(value):","    \"\"\"Format value as USD.\"\"\"","    return f\"${value:,.2f}\""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":60,"column":27},"action":"remove","lines":["import os","import requests","import urllib.parse","","from flask import redirect, render_template, request, session","from functools import wraps","","","def apology(message, code=400):","    \"\"\"Render message as an apology to user.\"\"\"","    def escape(s):","        \"\"\"","        Escape special characters.","        https://github.com/jacebrowning/memegen#special-characters","        \"\"\"","        for old, new in [(\"-\", \"--\"), (\" \", \"-\"), (\"_\", \"__\"), (\"?\", \"~q\"),","                         (\"%\", \"~p\"), (\"#\", \"~h\"), (\"/\", \"~s\"), (\"\\\"\", \"''\")]:","            s = s.replace(old, new)","        return s","    return render_template(\"apology.html\", top=code, bottom=escape(message)), code","","","def login_required(f):","    \"\"\"","    Decorate routes to require login.","    http://flask.pocoo.org/docs/1.0/patterns/viewdecorators/","    \"\"\"","    @wraps(f)","    def decorated_function(*args, **kwargs):","        if session.get(\"user_id\") is None:","            return redirect(\"/login\")","        return f(*args, **kwargs)","    return decorated_function","","","def lookup(symbol):","    \"\"\"Look up quote for symbol.\"\"\"","","    # Contact API","    try:","        api_key = os.environ.get(\"API_KEY\")","        response = requests.get(f\"https://cloud-sse.iexapis.com/stable/stock/{urllib.parse.quote_plus(symbol)}/quote?token={api_key}\")","        response.raise_for_status()","    except requests.RequestException:","        return None","","    # Parse response","    try:","        quote = response.json()","        return {","            \"name\": quote[\"companyName\"],","            \"price\": float(quote[\"latestPrice\"]),","            \"symbol\": quote[\"symbol\"]","        }","    except (KeyError, TypeError, ValueError):","        return None","","","def usd(value):","    \"\"\"Format value as USD.\"\"\"","    return f\"${value:,.2f}\""],"id":2},{"start":{"row":0,"column":0},"end":{"row":60,"column":27},"action":"insert","lines":["import os","import requests","import urllib.parse","","from flask import redirect, render_template, request, session","from functools import wraps","","","def apology(message, code=400):","    \"\"\"Render message as an apology to user.\"\"\"","    def escape(s):","        \"\"\"","        Escape special characters.","        https://github.com/jacebrowning/memegen#special-characters","        \"\"\"","        for old, new in [(\"-\", \"--\"), (\" \", \"-\"), (\"_\", \"__\"), (\"?\", \"~q\"),","                         (\"%\", \"~p\"), (\"#\", \"~h\"), (\"/\", \"~s\"), (\"\\\"\", \"''\")]:","            s = s.replace(old, new)","        return s","    return render_template(\"apology.html\", top=code, bottom=escape(message)), code","","","def login_required(f):","    \"\"\"","    Decorate routes to require login.","    http://flask.pocoo.org/docs/1.0/patterns/viewdecorators/","    \"\"\"","    @wraps(f)","    def decorated_function(*args, **kwargs):","        if session.get(\"user_id\") is None:","            return redirect(\"/login\")","        return f(*args, **kwargs)","    return decorated_function","","","def lookup(symbol):","    \"\"\"Look up quote for symbol.\"\"\"","","    # Contact API","    try:","        api_key = os.environ.get(\"API_KEY\")","        response = requests.get(f\"https://cloud-sse.iexapis.com/stable/stock/{urllib.parse.quote_plus(symbol)}/quote?token={api_key}\")","        response.raise_for_status()","    except requests.RequestException:","        return None","","    # Parse response","    try:","        quote = response.json()","        return {","            \"name\": quote[\"companyName\"],","            \"price\": float(quote[\"latestPrice\"]),","            \"symbol\": quote[\"symbol\"]","        }","    except (KeyError, TypeError, ValueError):","        return None","","","def usd(value):","    \"\"\"Format value as USD.\"\"\"","    return f\"${value:,.2f}\""]}]]},"ace":{"folds":[],"scrolltop":485,"scrollleft":0,"selection":{"start":{"row":60,"column":27},"end":{"row":60,"column":27},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":33,"state":"start","mode":"ace/mode/python"}},"timestamp":1597034167659,"hash":"81ccca5c65512ef31f01e5e84a634baf91242a5e"}