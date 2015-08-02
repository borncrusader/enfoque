What do I need for this to run?
1. A Windows operating System, preferably Windows 7. Nevertheless, it should work on all Windows versions since 2000.
2. .NET framework

 
What does it do?
1. You can bring windows to the foreground with a few keystrokes rather than fiddling with Alt-Tab/Win-Tab, thereby increasing your productivity.

 
Keep in mind the following caveats!
1. Only Windows is supported now! Duh!
2. Expect bugs! Please let me know about them.
3. Also, let me know about any usability issues you face.
4. Have fun!

 
How do I use it?
1. Start by configuring hotkeys and associated programs in the grid within the Hotkey tab.
2. You should give the associated program's window title in the program name.
   a. This doesn't have to be exact. At least a portion of the name should be sufficient.
   b. While regex matching isn't supported yet, you can expect it to be released as part of the future releases.
   c. If there are multiple windows present with the same title, then the one that was created first will be brought to the foreground!
3. And don't configure hotkeys for well known key combinations like "Alt-F4". Though, this would work, you would lose the original "Alt-F4" behavior, which is to close the application.
4. Certain Windows specific hotkeys like Win-E, Win-R, Win-F will not work as Windows will consume these hotkeys and will not pass it to the application.

 
What's in store for the future versions? [if there would be one]
1. Regex matching of window title.
2. Limiting the number of configurable hotkeys so that system hotkeys and other well known hotkeys are not overridden.
3. A face tracker which can automatically focus on windows on different monitors depending on which monitor you are facing. [Lol! I'm kidding]
