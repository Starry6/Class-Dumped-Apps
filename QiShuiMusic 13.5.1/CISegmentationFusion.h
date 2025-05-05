@interface CISegmentationFusion : CIFilter
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)kernel;
+ (id)customAttributes;
@end
