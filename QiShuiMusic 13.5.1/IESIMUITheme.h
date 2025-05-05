@interface IESIMUITheme : NSObject
@property (nonatomic) Q colorSuit;
@property (nonatomic) Q themeStyle;
- (unsigned long long)colorSuit;
- (id)getCurrentThemeName;
- (id)initWithColorSuit:themeStyle:;
- (void)setColorSuit:;
- (void)setThemeStyle:;
- (unsigned long long)themeStyle;
+ (id)getDarkTheme;
+ (id)getLightTheme;
+ (id)getThemeNameWithStyle:;
@end
