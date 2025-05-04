@interface AWENearbySkyLightThemeManager : NSObject
@property (nonatomic) q displayTransformerTheme;
@property (nonatomic) q transformerTheme;
- (void)onAWEUIThemeChangeNotification;
- (long long)displayTransformerTheme;
- (void)setDisplayTransformerTheme:;
- (long long)transformerTheme;
- (void)setTransformerTheme:;
- (void)updateSettingTransformerTheme:;
- (id)init;
+ (id)sharedManager;
@end
