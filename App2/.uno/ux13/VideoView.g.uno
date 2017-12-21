[Uno.Compiler.UxGenerated]
public partial class VideoView: Fuse.Controls.Panel
{
    static VideoView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public VideoView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Circle();
        var temp1 = new global::Fuse.Controls.Rectangle();
        temp.Color = float4(0.03921569f, 0.1882353f, 0.9372549f, 1f);
        temp1.Color = float4(0.972549f, 0.01176471f, 0.01176471f, 1f);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
