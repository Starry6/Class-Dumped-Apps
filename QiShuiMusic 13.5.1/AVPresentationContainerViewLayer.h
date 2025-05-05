@interface AVPresentationContainerViewLayer : CALayer
@property (nonatomic) AVPresentationContainerViewAppearanceProxy appearanceProxy;
@property (nonatomic) BOOL wantsAppearanceConfigValues;
- (id)cornerCurve;
- (void)setMasksToBounds:;
- (id)appearanceProxy;
- (void)setMaskedCorners:;
- (void)setWantsAppearanceConfigValues:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (void)setCornerCurve:;
- (unsigned long long)maskedCorners;
- (BOOL)continuousCorners;
- (void)setContinuousCorners:;
- (double)cornerRadius;
- (BOOL)wantsAppearanceConfigValues;
- (BOOL)masksToBounds;
@end
