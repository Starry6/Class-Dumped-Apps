@interface CIOpTile : CIFilter
@property (nonatomic) CIImage inputImage;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CIOpTile;
+ (id)customAttributes;
@end
