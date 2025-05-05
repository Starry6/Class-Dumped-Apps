@interface CIMorphology : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputRadius;
@end
