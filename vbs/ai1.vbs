Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
msg="artificial intelligence activated;your electronic personal assistant  welcomes you"
sapi.speak msg