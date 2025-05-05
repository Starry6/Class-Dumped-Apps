@interface BDXLynxBlurEffect : UIBlurEffect
@property (nonatomic) double blurRadius;
- (double)blurRadius;
- (void)setBlurRadius:;
+ (void)customBlurConfig;
+ (id)effectWithStyle:blurRadius:;
@end
