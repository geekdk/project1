Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
msg="artificial intelligence deactivated;goodbye sir"
sapi.speak msg