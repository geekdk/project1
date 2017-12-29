Set WshShell = WScript.CreateObject("WScript.Shell")
dim msg
msg=inputbox("PLEASE ENTER TEXT TO SEARCH                        ","reSific Technologies©","type here")
wshshell.run"https://www.google.co.in/search?q="&msg