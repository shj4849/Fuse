[Uno.Compiler.UxGenerated]
public partial class MyCircle: Fuse.Controls.Circle
{
    static MyCircle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyCircle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.003921569f, 0.2f, 0.9921569f, 1f);
        this.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
    }
}
