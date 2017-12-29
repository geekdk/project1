Set WshShell = WScript.CreateObject("WScript.Shell")
dim msg
msg=inputbox("PLEASE ENTER YOUR 10-DIGIT PNR NO.","VRD SOFTWARE SOLUTIONS©","type here")
wshshell.run"http://erail.in/indian-railway-pnr-status?pnr="&msg