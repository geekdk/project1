Set WshShell = WScript.CreateObject("WScript.Shell")
dim sapi
set sapi=createobject("sapi.spvoice")
dim msg
msg="sir my energy is too low; please connect the charger"
sapi.speak msg