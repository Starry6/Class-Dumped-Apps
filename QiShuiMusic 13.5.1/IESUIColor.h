@interface IESUIColor : NSObject
+ (BOOL)disableDarkMode;
+ (id)colorResourceForPath:;
+ (id)colorWithARGBString:defaultColor:;
+ (void)generateStandardColorMapWithRawColorResource:;
+ (void)setDisableDarkMode:;
+ (void)setUserPreferDarkModeStyle:;
+ (void)switchUIConfigWithDefaultSetting;
+ (void)switchUIConfigWithJsonData:;
+ (void)switchUIConfigWithPath:;
+ (long long)userPreferDarkModeStyle;
+ (id)colorNamed:;
+ (BOOL)isDarkMode;
@end
