set wshshell=wscript.createobject("Wscript.Shell")
set sapi=wscript.createobject("SAPI.SPvoice")
dim msg 
dim x        
if hour(time)<12 then
msg="good morning sir"
else
if hour(time)>12 and hour(time)<17 or hour(time)=12 then
msg="good afternoon sir"
else
if hour(time)>17 or hour(time)=17 then
msg="good evening sir"
end if
end if
end if
sapi.speak msg
