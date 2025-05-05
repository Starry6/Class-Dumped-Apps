@interface CISeedFill : CIFilter
@property (nonatomic) CIImage inputCenter;
@property (nonatomic) NSNumber inputThreshold;
@property (nonatomic) CIVector inputExtent;
@property (nonatomic) NSNumber inputSplat;
- (void)setInputCenter:;
- (id)inputCenter;
- (id)outputImage;
- (id)inputExtent;
- (void)setInputExtent:;
- (id)inputThreshold;
- (void)setInputThreshold:;
- (id)inputSplat;
- (void)setInputSplat:;
@end
