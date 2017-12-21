// This file was generated based on C:/Users/t2/Documents/Fuse/App/build/Android/Preview/cache/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.App_FuseControl-bf1a9526.h>
#include <_root.MainView.h>
#include <_root.MyButton.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[142];
static uType* TYPES[5];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :42
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[0/*"temp_eb0"*/], ::STRINGS[1/*"temp_eb1"*/], ::STRINGS[2/*"temp_eb2"*/], ::STRINGS[3/*"temp_eb3"*/], ::STRINGS[4/*"temp_eb4"*/], ::STRINGS[5/*"temp_eb5"*/], ::STRINGS[6/*"temp_eb6"*/], ::STRINGS[7/*"temp_eb7"*/], ::STRINGS[8/*"temp_eb8"*/], ::STRINGS[9/*"temp_eb9"*/], ::STRINGS[10/*"temp_eb10"*/], ::STRINGS[11/*"temp_eb11"*/], ::STRINGS[12/*"temp_eb12"*/], ::STRINGS[13/*"temp_eb13"*/], ::STRINGS[14/*"temp_eb14"*/], ::STRINGS[15/*"temp_eb15"*/], ::STRINGS[16/*"temp_eb16"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Value"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, ::STRINGS[18/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, ::STRINGS[19/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, ::STRINGS[20/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, ::STRINGS[21/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, ::STRINGS[22/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, ::STRINGS[23/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, ::STRINGS[24/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, ::STRINGS[25/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, ::STRINGS[26/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, ::STRINGS[27/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, ::STRINGS[28/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, ::STRINGS[29/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, ::STRINGS[30/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, ::STRINGS[31/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, ::STRINGS[32/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, ::STRINGS[33/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, ::STRINGS[34/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, ::STRINGS[35/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, ::STRINGS[36/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, ::STRINGS[37/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, ::STRINGS[38/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, ::STRINGS[39/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, ::STRINGS[40/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, ::STRINGS[41/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, ::STRINGS[42/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, ::STRINGS[43/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, ::STRINGS[44/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, ::STRINGS[45/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, ::STRINGS[46/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, ::STRINGS[47/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, ::STRINGS[48/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), ::STRINGS[49/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, ::STRINGS[49/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), ::STRINGS[50/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, ::STRINGS[50/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), ::STRINGS[51/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, ::STRINGS[51/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), ::STRINGS[52/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, ::STRINGS[52/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), ::STRINGS[53/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, ::STRINGS[53/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), ::STRINGS[54/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, ::STRINGS[54/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), ::STRINGS[55/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, ::STRINGS[55/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), ::STRINGS[56/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, ::STRINGS[56/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), ::STRINGS[57/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, ::STRINGS[57/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), ::STRINGS[58/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, ::STRINGS[58/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), ::STRINGS[59/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, ::STRINGS[59/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), ::STRINGS[60/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, ::STRINGS[60/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), ::STRINGS[61/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, ::STRINGS[61/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), ::STRINGS[62/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, ::STRINGS[62/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), ::STRINGS[63/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, ::STRINGS[63/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), ::STRINGS[64/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, ::STRINGS[64/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), ::STRINGS[65/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, ::STRINGS[65/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, ::STRINGS[66/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, ::STRINGS[67/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, ::STRINGS[68/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, ::STRINGS[69/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, ::STRINGS[70/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, ::STRINGS[71/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, ::STRINGS[72/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, ::STRINGS[73/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, ::STRINGS[74/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, ::STRINGS[74/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, ::STRINGS[75/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, ::STRINGS[76/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, ::STRINGS[77/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, ::STRINGS[77/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, ::STRINGS[78/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, ::STRINGS[79/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, ::STRINGS[80/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, ::STRINGS[80/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, ::STRINGS[81/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, ::STRINGS[82/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, ::STRINGS[83/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, ::STRINGS[84/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, ::STRINGS[85/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, ::STRINGS[86/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, ::STRINGS[87/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, ::STRINGS[88/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, ::STRINGS[89/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, ::STRINGS[90/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, ::STRINGS[91/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, ::STRINGS[92/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, ::STRINGS[93/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, ::STRINGS[94/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, ::STRINGS[95/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, ::STRINGS[96/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, ::STRINGS[97/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, ::STRINGS[98/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[99/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, ::STRINGS[100/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, ::STRINGS[101/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, ::STRINGS[102/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, ::STRINGS[103/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, ::STRINGS[104/*"Height"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb0");
    ::STRINGS[1] = uString::Const("temp_eb1");
    ::STRINGS[2] = uString::Const("temp_eb2");
    ::STRINGS[3] = uString::Const("temp_eb3");
    ::STRINGS[4] = uString::Const("temp_eb4");
    ::STRINGS[5] = uString::Const("temp_eb5");
    ::STRINGS[6] = uString::Const("temp_eb6");
    ::STRINGS[7] = uString::Const("temp_eb7");
    ::STRINGS[8] = uString::Const("temp_eb8");
    ::STRINGS[9] = uString::Const("temp_eb9");
    ::STRINGS[10] = uString::Const("temp_eb10");
    ::STRINGS[11] = uString::Const("temp_eb11");
    ::STRINGS[12] = uString::Const("temp_eb12");
    ::STRINGS[13] = uString::Const("temp_eb13");
    ::STRINGS[14] = uString::Const("temp_eb14");
    ::STRINGS[15] = uString::Const("temp_eb15");
    ::STRINGS[16] = uString::Const("temp_eb16");
    ::STRINGS[17] = uString::Const("Value");
    ::STRINGS[18] = uString::Const("Linear");
    ::STRINGS[19] = uString::Const("QuadraticIn");
    ::STRINGS[20] = uString::Const("QuadraticOut");
    ::STRINGS[21] = uString::Const("QuadraticInOut");
    ::STRINGS[22] = uString::Const("CubicIn");
    ::STRINGS[23] = uString::Const("CubicOut");
    ::STRINGS[24] = uString::Const("CubicInOut");
    ::STRINGS[25] = uString::Const("QuarticIn");
    ::STRINGS[26] = uString::Const("QuarticOut");
    ::STRINGS[27] = uString::Const("QuarticInOut");
    ::STRINGS[28] = uString::Const("QuinticIn");
    ::STRINGS[29] = uString::Const("QuinticOut");
    ::STRINGS[30] = uString::Const("QuinticInOut");
    ::STRINGS[31] = uString::Const("SinusoidalIn");
    ::STRINGS[32] = uString::Const("SinusoidalOut");
    ::STRINGS[33] = uString::Const("SinusoidalInOut");
    ::STRINGS[34] = uString::Const("ExponentialIn");
    ::STRINGS[35] = uString::Const("ExponentialOut");
    ::STRINGS[36] = uString::Const("ExponentialInOut");
    ::STRINGS[37] = uString::Const("CircularIn");
    ::STRINGS[38] = uString::Const("CircularOut");
    ::STRINGS[39] = uString::Const("CircularInOut");
    ::STRINGS[40] = uString::Const("ElasticIn");
    ::STRINGS[41] = uString::Const("ElasticOut");
    ::STRINGS[42] = uString::Const("ElasticInOut");
    ::STRINGS[43] = uString::Const("BackIn");
    ::STRINGS[44] = uString::Const("BackOut");
    ::STRINGS[45] = uString::Const("BackInOut");
    ::STRINGS[46] = uString::Const("BounceIn");
    ::STRINGS[47] = uString::Const("BounceOut");
    ::STRINGS[48] = uString::Const("BounceInOut");
    ::STRINGS[49] = uString::Const("Transparent");
    ::STRINGS[50] = uString::Const("Black");
    ::STRINGS[51] = uString::Const("Silver");
    ::STRINGS[52] = uString::Const("Gray");
    ::STRINGS[53] = uString::Const("White");
    ::STRINGS[54] = uString::Const("Maroon");
    ::STRINGS[55] = uString::Const("Red");
    ::STRINGS[56] = uString::Const("Purple");
    ::STRINGS[57] = uString::Const("Fuchsia");
    ::STRINGS[58] = uString::Const("Green");
    ::STRINGS[59] = uString::Const("Lime");
    ::STRINGS[60] = uString::Const("Olive");
    ::STRINGS[61] = uString::Const("Yellow");
    ::STRINGS[62] = uString::Const("Navy");
    ::STRINGS[63] = uString::Const("Blue");
    ::STRINGS[64] = uString::Const("Teal");
    ::STRINGS[65] = uString::Const("Aqua");
    ::STRINGS[66] = uString::Const("TopLeft");
    ::STRINGS[67] = uString::Const("Center");
    ::STRINGS[68] = uString::Const("Anchor");
    ::STRINGS[69] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[70] = uString::Const("VerticalBoxCenter");
    ::STRINGS[71] = uString::Const("TransformOriginOffset");
    ::STRINGS[72] = uString::Const("PositionOffset");
    ::STRINGS[73] = uString::Const("SizeFactor");
    ::STRINGS[74] = uString::Const("Size");
    ::STRINGS[75] = uString::Const("GiveFocus");
    ::STRINGS[76] = uString::Const("Keyboard");
    ::STRINGS[77] = uString::Const("LayoutChange");
    ::STRINGS[78] = uString::Const("WorldPositionChange");
    ::STRINGS[79] = uString::Const("PositionChange");
    ::STRINGS[80] = uString::Const("SizeChange");
    ::STRINGS[81] = uString::Const("Points");
    ::STRINGS[82] = uString::Const("Pixels");
    ::STRINGS[83] = uString::Const("ContentSize");
    ::STRINGS[84] = uString::Const("ScrollViewSize");
    ::STRINGS[85] = uString::Const("PreloadRetain");
    ::STRINGS[86] = uString::Const("UnloadUnused");
    ::STRINGS[87] = uString::Const("QuickUnload");
    ::STRINGS[88] = uString::Const("UnloadInBackground");
    ::STRINGS[89] = uString::Const("Thin");
    ::STRINGS[90] = uString::Const("Light");
    ::STRINGS[91] = uString::Const("Regular");
    ::STRINGS[92] = uString::Const("Medium");
    ::STRINGS[93] = uString::Const("Bold");
    ::STRINGS[94] = uString::Const("ThinItalic");
    ::STRINGS[95] = uString::Const("LightItalic");
    ::STRINGS[96] = uString::Const("Italic");
    ::STRINGS[97] = uString::Const("MediumItalic");
    ::STRINGS[98] = uString::Const("BoldItalic");
    ::STRINGS[99] = uString::Const("PlatformDefault");
    ::STRINGS[100] = uString::Const("Identity");
    ::STRINGS[101] = uString::Const("Local");
    ::STRINGS[102] = uString::Const("ParentSize");
    ::STRINGS[103] = uString::Const("Width");
    ::STRINGS[104] = uString::Const("Height");
    ::STRINGS[105] = uString::Const("a");
    ::STRINGS[106] = uString::Const("Mi");
    ::STRINGS[107] = uString::Const("Num1");
    ::STRINGS[108] = uString::Const("Num2");
    ::STRINGS[109] = uString::Const("Num3");
    ::STRINGS[110] = uString::Const("Sum1");
    ::STRINGS[111] = uString::Const("Num4");
    ::STRINGS[112] = uString::Const("Num5");
    ::STRINGS[113] = uString::Const("Num6");
    ::STRINGS[114] = uString::Const("Sum2");
    ::STRINGS[115] = uString::Const("Num7");
    ::STRINGS[116] = uString::Const("Num8");
    ::STRINGS[117] = uString::Const("Num9");
    ::STRINGS[118] = uString::Const("Sum3");
    ::STRINGS[119] = uString::Const("NumC");
    ::STRINGS[120] = uString::Const("Num0");
    ::STRINGS[121] = uString::Const("Result");
    ::STRINGS[122] = uString::Const("Sum4");
    ::STRINGS[123] = uString::Const("\n"
        "\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\tvar a = Observable(\"\");\n"
        "\tvar check = 0;\n"
        "\n"
        "\tfunction Num1(){\n"
        "\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\n"
        "\t\ta.value = a.value+\"1\";\n"
        "\t\tconsole.log(a.value);\n"
        "\t}\n"
        "\tfunction Num2(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"2\";\n"
        "\t}\n"
        "\tfunction Num3(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"3\";\n"
        "\t}\n"
        "\tfunction Num4(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"4\";\n"
        "\t}\n"
        "\tfunction Num5(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"5\";\n"
        "\t}\n"
        "\tfunction Num6(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"6\";\n"
        "\t}\n"
        "\tfunction Num7(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"7\";\n"
        "\t}\n"
        "\tfunction Num8(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"8\";\n"
        "\t}\n"
        "\tfunction Num9(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"9\";\n"
        "\t}\n"
        "\tfunction Num0(){\n"
        "\t\t\t\tif(check == 1){\n"
        "\t\t\ta.value=\"\";\n"
        "\t\t\tcheck = 0;\n"
        "\t\t}\n"
        "\t\ta.value = a.value + \"0\";\n"
        "\t}\n"
        "\tfunction NumC(){\n"
        "\t\ta.value = \"\";\n"
        "\t}\n"
        "\n"
        "\tfunction Sum1() {\n"
        "\t\ta.value = a.value + \"+\";\n"
        "\t\tif(check == 1){\n"
        "\t\t\tcheck=0;\n"
        "\t\t}\n"
        "\t}\n"
        "\tfunction Sum2() {\n"
        "\t\ta.value = a.value + \"-\";\n"
        "\t\tif(check == 1){\n"
        "\t\t\tcheck=0;\n"
        "\t\t}\n"
        "\t}\n"
        "\tfunction Sum3() {\n"
        "\t\ta.value = a.value + \"*\";\n"
        "\t\tif(check == 1){\n"
        "\t\t\tcheck=0;\n"
        "\t\t}\n"
        "\t}\n"
        "\tfunction Sum4() {\n"
        "\t\ta.value = a.value + \"/\";\n"
        "\t\tif(check == 1){\n"
        "\t\t\tcheck=0;\n"
        "\t\t}\n"
        "\t}\n"
        "\tfunction Result() {\n"
        "\t\tcheck = 1;\n"
        "\t\ta.value = eval(a.value);\n"
        "\t}\n"
        "\tfunction Mi() { //\353\222\244\354\227\220\354\204\234 \355\225\230\353\202\230\354\224\251 \354\247\200\354\232\260\352\270\260\n"
        "\t\ta.value = a.value.substring(0, a.value.length - 1);\n"
        "\t}\n"
        "\n"
        "\tmodule.exports={\n"
        "\t\ta,Sum1,Sum2,Sum3,Sum4,Num1,Num2,Num3,Num4,Num5,Num6,Num7,Num8,Num9,Num0,NumC, Result, Mi\n"
        "\t};\n"
        "\t");
    ::STRINGS[124] = uString::Const("MainView.ux");
    ::STRINGS[125] = uString::Const("<-----");
    ::STRINGS[126] = uString::Const("1");
    ::STRINGS[127] = uString::Const("2");
    ::STRINGS[128] = uString::Const("3");
    ::STRINGS[129] = uString::Const("+");
    ::STRINGS[130] = uString::Const("4");
    ::STRINGS[131] = uString::Const("5");
    ::STRINGS[132] = uString::Const("6");
    ::STRINGS[133] = uString::Const("-");
    ::STRINGS[134] = uString::Const("7");
    ::STRINGS[135] = uString::Const("8");
    ::STRINGS[136] = uString::Const("9");
    ::STRINGS[137] = uString::Const("*");
    ::STRINGS[138] = uString::Const("C");
    ::STRINGS[139] = uString::Const("0");
    ::STRINGS[140] = uString::Const("=");
    ::STRINGS[141] = uString::Const("/");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::Grid_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(MainView, temp_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb4), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb8), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb9), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb10), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb11), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb12), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb13), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb14), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb15), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb16), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, type, 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :153
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :157
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :153
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;

// public MainView() [instance] :153
void MainView::ctor_4()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :157
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp1 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp2 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp3 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp4 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp5 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp6 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp7 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp8 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp9 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp10 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp11 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp12 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp13 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp14 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp15 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp16 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp17 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::App_FuseControlsTextControl_Value_Property::New1(temp, MainView::__selector0_);
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(::STRINGS[105/*"a"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[106/*"Mi"*/]);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(::STRINGS[107/*"Num1"*/]);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[108/*"Num2"*/]);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[109/*"Num3"*/]);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[110/*"Sum1"*/]);
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(::STRINGS[111/*"Num4"*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[112/*"Num5"*/]);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(::STRINGS[113/*"Num6"*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[114/*"Sum2"*/]);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(::STRINGS[115/*"Num7"*/]);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[116/*"Num8"*/]);
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(::STRINGS[117/*"Num9"*/]);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(::STRINGS[118/*"Sum3"*/]);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(::STRINGS[119/*"NumC"*/]);
    ::g::Fuse::Reactive::Data* temp33 = ::g::Fuse::Reactive::Data::New1(::STRINGS[120/*"Num0"*/]);
    ::g::Fuse::Reactive::Data* temp34 = ::g::Fuse::Reactive::Data::New1(::STRINGS[121/*"Result"*/]);
    ::g::Fuse::Reactive::Data* temp35 = ::g::Fuse::Reactive::Data::New1(::STRINGS[122/*"Sum4"*/]);
    ::g::Fuse::Reactive::JavaScript* temp36 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Grid* temp37 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp38 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp18, 3);
    ::g::MyButton* temp39 = ::g::MyButton::New6();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp19);
    ::g::MyButton* temp40 = ::g::MyButton::New6();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp20);
    ::g::MyButton* temp41 = ::g::MyButton::New6();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::MyButton* temp42 = ::g::MyButton::New6();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22);
    ::g::MyButton* temp43 = ::g::MyButton::New6();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp23);
    ::g::MyButton* temp44 = ::g::MyButton::New6();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::MyButton* temp45 = ::g::MyButton::New6();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp25);
    ::g::MyButton* temp46 = ::g::MyButton::New6();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp26);
    ::g::MyButton* temp47 = ::g::MyButton::New6();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::MyButton* temp48 = ::g::MyButton::New6();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp28);
    ::g::MyButton* temp49 = ::g::MyButton::New6();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp29);
    ::g::MyButton* temp50 = ::g::MyButton::New6();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    ::g::MyButton* temp51 = ::g::MyButton::New6();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp31);
    ::g::MyButton* temp52 = ::g::MyButton::New6();
    temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp32);
    ::g::MyButton* temp53 = ::g::MyButton::New6();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp33);
    ::g::MyButton* temp54 = ::g::MyButton::New6();
    temp_eb15 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp34);
    ::g::MyButton* temp55 = ::g::MyButton::New6();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp35);
    temp36->Code(::STRINGS[123/*"\n\tvar Obs...*/]);
    temp36->LineNumber(2);
    temp36->FileName(::STRINGS[124/*"MainView.ux"*/]);
    temp37->RowCount(6);
    temp37->ColumnCount(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    temp->FontSize(50.0f);
    temp->Alignment(10);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp, 4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp38);
    temp39->Text(::STRINGS[125/*"<-----"*/]);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp39, 4);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp39, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp40->Text(::STRINGS[126/*"1"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp40, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp41->Text(::STRINGS[127/*"2"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp41, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp42->Text(::STRINGS[128/*"3"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp42, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp43->Text(::STRINGS[129/*"+"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp43, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp44->Text(::STRINGS[130/*"4"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp44, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp45->Text(::STRINGS[131/*"5"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp45, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp46->Text(::STRINGS[132/*"6"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp46, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp47->Text(::STRINGS[133/*"-"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp47, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp48->Text(::STRINGS[134/*"7"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp48, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb9);
    temp49->Text(::STRINGS[135/*"8"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp49, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb10);
    temp50->Text(::STRINGS[136/*"9"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp50, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    temp51->Text(::STRINGS[137/*"*"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp51, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb12);
    temp52->Text(::STRINGS[138/*"C"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp52, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb13)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb13);
    temp53->Text(::STRINGS[139/*"0"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp53, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    temp54->Text(::STRINGS[140/*"="*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp54, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb15)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb15);
    temp55->Text(::STRINGS[141/*"/"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp55, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb16);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
}

// public MainView New() [static] :153
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
