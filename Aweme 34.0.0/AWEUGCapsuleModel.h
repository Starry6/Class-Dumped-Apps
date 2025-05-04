@interface AWEUGCapsuleModel : NSObject
@property (nonatomic) NSString capsuleBGColor;
@property (nonatomic) NSString capsuleBoderColor;
@property (nonatomic) double capsuleBoderWidth;
@property (nonatomic) AWEUGCapsuleGradientModel gradient;
- (id)capsuleBGColor;
- (void)setCapsuleBGColor:;
- (id)capsuleBoderColor;
- (void)setCapsuleBoderColor:;
- (double)capsuleBoderWidth;
- (void)setCapsuleBoderWidth:;
- (void)setGradient:;
- (id)gradient;
- (void).cxx_destruct;
@end
