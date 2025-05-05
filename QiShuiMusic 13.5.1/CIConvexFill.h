@interface CIConvexFill : CIFilter
@property (nonatomic) CIImage inputCenter;
@property (nonatomic) NSNumber inputThreshold;
@property (nonatomic) CIVector inputAreaThresholdLoHi;
@property (nonatomic) NSNumber inputSplat;
- (void)setInputCenter:;
- (id)inputCenter;
- (id)outputImage;
- (id)inputThreshold;
- (void)setInputThreshold:;
- (id)inputAreaThresholdLoHi;
- (void)setInputAreaThresholdLoHi:;
- (id)inputSplat;
- (void)setInputSplat:;
@end
