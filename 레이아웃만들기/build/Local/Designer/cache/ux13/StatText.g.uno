[Uno.Compiler.UxGenerated]
public partial class StatText: MyText
{
    static StatText()
    {
    }
    [global::Uno.UX.UXConstructor]
    public StatText()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.FontSize = 14f;
        this.Color = float4(0.06666667f, 0.06666667f, 0.06666667f, 1f);
        this.Alignment = Fuse.Elements.Alignment.CenterLeft;
    }
}
