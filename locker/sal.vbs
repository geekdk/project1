Set WshShell = WScript.CreateObject("WScript.Shell")
Set Sapi = Wscript.CreateObject("SAPI.SpVoice")
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
msg="please enter your password"
sapi.speak msg
x=inputbox("PLEASE ENTER YOUR PASS KEY","VRD CYBER SECURITY SOLUTIONS©","type here")
if x="vrd" then
WshShell.Run("C:\project\locker\flock1")
else if x="vrdhck" then
WshShell.Run("C:\project\locker\flock3")
else if x="vrdpr" then
WshShell.Run("C:\project\locker\flock2")
end if
end if
end if
msg="system locked"
sapi.speak msg

