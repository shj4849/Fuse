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
        var temp = new global::Fuse.Controls.Text();
        this.Color = float4(0.9882353f, 0.007843138f, 0.007843138f, 1f);
        this.Margin = float4(10f, 10f, 10f, 10f);
        temp.Value = "사각형";
        this.Children.Add(temp);
    }
}
