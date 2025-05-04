@interface AWELiveBigFontConfig : NSObject
@property (nonatomic) BOOL enableLiveBigFontAdapt;
- (BOOL)liveBigFontAdaptSwitch;
- (void)setEnableLiveBigFontAdapt:;
- (BOOL)enableLiveBigFontAdapt;
- (id)init;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (double)currentLiveFontScale;
+ (double)calculateLiveBigFontModeLength:;
+ (unsigned long long)currentLiveFontMode;
+ (id)calculateLiveBigFontModeSize:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
