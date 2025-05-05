@interface CICircularMaskFromPointImage : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputCoordinate;
@property (nonatomic) NSNumber inputInnerRadius;
@property (nonatomic) NSNumber inputOuterRadius;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_kernelDraw;
- (id)inputCoordinate;
- (void)setInputCoordinate:;
- (id)inputInnerRadius;
- (void)setInputInnerRadius:;
- (id)inputOuterRadius;
- (void)setInputOuterRadius:;
+ (id)customAttributes;
@end
