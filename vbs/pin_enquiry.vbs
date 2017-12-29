Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg,msg1
msg1="please enter the city or district name"
sapi.speak msg1
msg=inputbox("PLEASE ENTER THE NAME OF THE CITY     (USE '+' INSTEAD OF SPACES)","VRD SOFTWARE SOLUTIONS©","type here")
wshshell.run"http://www.getpincodes.com/search?q="&msg