@interface IESIMUIColor : NSObject
+ (BOOL)disableDarkMode;
+ (id)availableSuits;
+ (id)colorNamed:inTheme:;
+ (id)colorWithARGBString:defaultColor:;
+ (id)colorWithName:;
+ (id)constColorUnlessDarkModeWithName:;
+ (id)constColorWithName:;
+ (unsigned long long)currentSuit;
+ (id)dicColor;
+ (id)dicConstColor;
+ (void)invalidateColorCache;
+ (void)loadDeprecatedColorMap;
+ (void)loadStandardColorMap;
+ (id)rawColorForName:style:;
+ (id)rawColorResource;
+ (id)saas_rawColorResource;
+ (void)setDisableDarkMode:;
+ (void)setUserPreferDarkModeStyle:;
+ (void)switchToSuit:;
+ (void)switchToSuitAndInvalidateColorCache:;
+ (long long)userPreferDarkModeStyle;
+ (id)colorNamed:;
+ (BOOL)isDarkMode;
@end
