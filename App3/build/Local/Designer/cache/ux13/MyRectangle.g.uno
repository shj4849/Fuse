[Uno.Compiler.UxGenerated]
public partial class MyRectangle: Fuse.Controls.Rectangle
{
    static MyRectangle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyRectangle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.Color = float4(0.4941176f, 0.9607843f, 0.1607843f, 1f);
        this.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        this.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
    }
}
