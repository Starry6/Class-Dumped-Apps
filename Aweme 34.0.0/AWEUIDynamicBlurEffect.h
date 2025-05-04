@interface AWEUIDynamicBlurEffect : UIBlurEffect
@property (nonatomic) q awe_themeStyle;
@property (nonatomic) Q awe_effectStyle;
- (id)blurEffectInSpecificTheme:;
- (void)setAwe_effectStyle:;
- (void)setAwe_themeStyle:;
- (long long)awe_themeStyle;
- (unsigned long long)awe_effectStyle;
- (id)blurEffectInCurrentTheme;
+ (id)dynamicBlurEffectWithStyle:inTheme:;
+ (id)dynamicBlurEffectWithStyle:;
@end
