@interface AWETemplateViewTool : NSObject
+ (id)colorWithHexString:defaultColor:;
+ (void)configImageWithImageModel:targeImageView:defaultImage:;
+ (void)configLabelWithTextModel:targetView:;
+ (id)__textFont:defaultFontName:defaultFontSize:;
+ (id)awe_colorWithARGBHexString:defaultColor:;
@end
