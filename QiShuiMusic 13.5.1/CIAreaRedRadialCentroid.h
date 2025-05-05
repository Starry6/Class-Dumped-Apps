@interface CIAreaRedRadialCentroid : CIAreaRedCentroid
@property (nonatomic) CIImage inputCenter;
@property (nonatomic) NSNumber inputRadius;
@property (nonatomic) NSNumber inputRadialMode;
@property (nonatomic) NSNumber inputMinWeight;
- (void)setInputCenter:;
- (void)setInputRadius:;
- (id)inputCenter;
- (id)inputRadius;
- (id)outputImage;
- (id)_kernelGaussian;
- (id)_kernelDisk;
- (id)_kernelCenter;
- (id)inputRadialMode;
- (void)setInputRadialMode:;
- (id)inputMinWeight;
- (void)setInputMinWeight:;
+ (id)customAttributes;
@end
