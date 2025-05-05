@interface CIEdgeWork : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputRadius;
- (void)setInputRadius:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputRadius;
- (id)outputImage;
- (id)_CIEdgeWork;
- (id)_CIEdgeWorkContrast;
+ (id)customAttributes;
@end
