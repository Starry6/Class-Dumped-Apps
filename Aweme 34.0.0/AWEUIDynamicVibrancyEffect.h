@interface AWEUIDynamicVibrancyEffect : UIVibrancyEffect
@property (nonatomic) AWEUIDynamicBlurEffect awe_blurEffect;
- (void)setAwe_blurEffect:;
- (id)vibrancyEffectInSpecificTheme:;
- (id)awe_blurEffect;
- (id)vibrancyEffectInCurrentTheme;
- (void).cxx_destruct;
+ (id)dynamicVibrancyEffectForBlurEffect:inTheme:;
+ (id)dynamicVibrancyEffectForBlurEffect:;
@end
