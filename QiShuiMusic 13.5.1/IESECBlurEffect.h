@interface IESECBlurEffect : UIBlurEffect
@property (nonatomic) double blurRadius;
@property (nonatomic) double saturationDeltaFactor;
- (void)setSaturationDeltaFactor:;
- (double)saturationDeltaFactor;
- (double)blurRadius;
- (void)setBlurRadius:;
+ (void)customBlurConfig;
+ (id)effectWithStyle:blurRadius:saturationDeltaFactor:;
@end
