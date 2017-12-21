[Uno.Compiler.UxGenerated]
public partial class ArticlePage: Fuse.Controls.Page
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static ArticlePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ArticlePage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("article");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new NYTArticleSearch_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Member(temp1, "lead_paragraph");
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        temp3.LineNumber = 2;
        temp3.FileName = "ArticlePage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import("../../../../../ArticlePage.js"));
        temp.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp4);
        __g_nametable.This = this;
        this.Children.Add(temp3);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
