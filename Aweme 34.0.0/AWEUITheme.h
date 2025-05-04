@interface AWEUITheme : NSObject
@property (nonatomic) Q colorSuit;
@property (nonatomic) q themeStyle;
- (void)setThemeStyle:;
- (id)getCurrentThemeName;
- (unsigned long long)colorSuit;
- (id)initWithColorSuit:themeStyle:;
- (void)setColorSuit:;
- (long long)themeStyle;
+ (id)getLightTheme;
+ (id)getDarkTheme;
+ (id)getThemeNameWithStyle:;
@end
