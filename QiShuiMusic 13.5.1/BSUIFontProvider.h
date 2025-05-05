@interface BSUIFontProvider : NSObject
- (id)preferredFontForTextStyle:hiFontStyle:contentSizeCategory:;
- (id)preferredFontForTextStyle:hiFontStyle:;
+ (id)defaultFontProvider;
+ (id)preferredFontProvider;
@end
