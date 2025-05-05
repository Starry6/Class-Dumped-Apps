@interface CIStarShineGenerator : CIFilter
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) CIColor inputColor;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputCrossScale;
@property (nonatomic) NSNumber inputCrossAngle;
@property (nonatomic) NSNumber inputCrossOpacity;
@property (nonatomic) NSNumber inputCrossWidth;
@property (nonatomic) NSNumber inputEpsilon;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputCenter;
- (id)inputRadius;
- (id)_kernel;
- (id)outputImage;
- (id)inputColor;
- (void)setInputColor:;
- (id)inputEpsilon;
- (void)setInputEpsilon:;
- (id)inputCrossAngle;
- (void)setInputCrossAngle:;
- (id)inputCrossScale;
- (void)setInputCrossScale:;
- (id)inputCrossWidth;
- (void)setInputCrossWidth:;
- (id)inputCrossOpacity;
- (void)setInputCrossOpacity:;
+ (id)customAttributes;
@end
