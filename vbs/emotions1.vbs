Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
msg="emotions mode activated"
sapi.speak msg