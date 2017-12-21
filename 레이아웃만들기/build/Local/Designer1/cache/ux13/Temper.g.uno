[Uno.Compiler.UxGenerated]
public partial class Temper: MyText
{
    static Temper()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Temper()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.FontSize = 20f;
        this.Color = float4(0.2f, 0.2f, 0.2f, 1f);
        this.Alignment = Fuse.Elements.Alignment.Center;
        this.Margin = float4(6f, 0f, 0f, 0f);
    }
}
