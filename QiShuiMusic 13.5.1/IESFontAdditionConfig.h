@interface IESFontAdditionConfig : NSObject
@property (nonatomic) <IESLiveFontScaleConfig> fontConfig;
- (double)_currentFontScale;
- (BOOL)bigFontModeOn;
- (id)fontConfig;
- (void)setFontConfig:;
- (void).cxx_destruct;
+ (double)calculateWithFontSize:;
+ (double)currentFontScale;
+ (id)config;
@end
