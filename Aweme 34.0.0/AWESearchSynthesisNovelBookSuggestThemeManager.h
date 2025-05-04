@interface AWESearchSynthesisNovelBookSuggestThemeManager : NSObject
@property (nonatomic) NSDictionary themeCache;
- (id)themeCache;
- (id)yellowTheme;
- (id)greenTheme;
- (id)darkTheme;
- (void)setThemeCache:;
- (id)init;
- (id)defaultTheme;
- (void).cxx_destruct;
- (id)blueTheme;
+ (id)themeFromType:;
+ (id)shareInstance;
+ (id)themes;
@end
