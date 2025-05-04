@interface AWENewVideoCoverTextProcessor : NSObject
+ (void)selectUIColor:withTextLayer:imageWrapper:;
+ (void)selectUIColor:withTextTemplateLayer:imageWrapper:;
+ (void)selectUIColors:withTextTemplateLayer:imageWrapper:;
+ (void)selectAlign:withTextLayer:imageWrapper:;
+ (void)selectAlign:withTextTemplateLayer:imageWrapper:;
+ (void)selectAligns:withTextTemplateLayer:imageWrapper:;
+ (void)selectTextStyle:textModel:withTextLayer:imageWrapper:;
+ (void)selectTextForegroundColor:outLine:outlineWidth:outlineColor:backgroundColor:withTextLayer:imageWrapper:;
+ (void)selectTextStyle:textModel:withTextTemplateLayer:imageWrapper:;
+ (void)selectTextForegroundColors:outLines:outlineWidths:outlineColors:backgroundColors:withTextTemplateLayer:imageWrapper:;
+ (void)changeTextWithLastContent:withTextLayer:imageWrapper:;
+ (void)changeTextWithLastContent:withTextTemplateLayer:imageWrapper:;
+ (void)selectFontSource:withTextLayer:imageWrapper:;
+ (void)selectFontType:resourceId:withTextTemplateLayer:imageWrapper:;
+ (void)selectFonts:withTextTemplateLayer:imageWrapper:;
+ (void)selectTextForegroundColor:outLine:outlineWidth:outlineColor:backgroundColor:withTextTemplateLayer:imageWrapper:;
@end
