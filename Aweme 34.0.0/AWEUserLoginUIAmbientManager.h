@interface AWEUserLoginUIAmbientManager : NSObject
@property (nonatomic) NSDictionary themeMap;
- (id)ambientConfigWithThemeID:;
- (void)p_loadThemeMapFromSettings;
- (void)setThemeMap:;
- (id)themeMap;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
