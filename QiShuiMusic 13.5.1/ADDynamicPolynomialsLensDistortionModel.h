@interface ADDynamicPolynomialsLensDistortionModel : ADPolynomialsLensDistortionModel
@property (nonatomic) float dynamicFactor;
@property (nonatomic) r^{ADDistortionPolynomials=[8f][8f]} distortionPolynomialsBase;
@property (nonatomic) r^{ADDistortionPolynomials=[8f][8f]} distortionPolynomialsDynamic;
- (id)copyWithZone:;
- (id)distortionPolynomialsBase;
- (id)distortionPolynomialsDynamic;
- (void)setDistortionPolynomials:;
- (void)updatePolynomials;
- (void)setDistortionPolynomialsBase:;
- (void)setDistortionPolynomialsDynamic:;
- (void)setDynamicFactor:;
- (id)initWithDistortionCenter:dynFactor:polynomialsBase:polynomialsDynamic:;
- (float)dynamicFactor;
@end
