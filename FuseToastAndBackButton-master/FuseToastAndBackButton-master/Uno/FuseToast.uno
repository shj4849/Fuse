using Uno;
using Uno.Collections;
using Fuse;

using Fuse.Scripting;
using Uno.UX;

using Uno.Compiler.ExportTargetInterop;

[extern(Android) ForeignInclude(Language.Java, "android.app.Activity","android.widget.Toast")]

[UXGlobalModule]
public class FuseToast : NativeModule
{
    public FuseToast(){
        AddMember(new NativeFunction("toastIt", (NativeCallback)ToastIt));
    }

    static object ToastIt(Fuse.Scripting.Context c, object[] args)
    {
        var arg1 = args[0] as string;
        var arg2 = args[1] as string;
        FuseToast.ToastIt(arg1, arg2);
        debug_log arg1 + " " + arg2;

        return null;
    }

    [Foreign(Language.Java)]
    static extern(Android) void ToastIt(string message, string duration)
    @{
        final android.app.Activity context = com.fuse.Activity.getRootActivity();

        final int toastDuration = (duration == "short") ? Toast.LENGTH_SHORT : Toast.LENGTH_LONG;

        context.runOnUiThread(new Runnable(){
            public void run(){
                Toast.makeText(context ,message,toastDuration).show();
            }
        });
    @}

    static extern(!Android) void ToastIt(string message, string duration)
    {
        debug_log "Toast not supported on this platform.";
    }
}