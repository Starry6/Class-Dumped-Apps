@interface AWEPadBlurEffect : UIBlurEffect
@property (nonatomic) double blurRadius;
@property (nonatomic) double saturationDeltaFactor;
- (void)setBlurRadius:;
- (double)saturationDeltaFactor;
- (void)setSaturationDeltaFactor:;
- (double)blurRadius;
+ (void)customBlurConfig;
+ (id)effectWithStyle:blurRadius:saturationDeltaFactor:;
@end
