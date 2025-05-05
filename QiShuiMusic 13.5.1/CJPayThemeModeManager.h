@interface CJPayThemeModeManager : NSObject
@property (nonatomic) Q themeMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)i_setThemeModeWithParam:;
- (id)i_themeModeStr;
- (BOOL)isLightMode;
- (BOOL)isOriginMode;
- (void)setThemeMode:;
- (unsigned long long)themeMode;
- (void)setTheme:;
- (BOOL)isDarkMode;
+ (void)registerComponents;
+ (unsigned long long)themeModeFromString:;
+ (id)sharedInstance;
@end
