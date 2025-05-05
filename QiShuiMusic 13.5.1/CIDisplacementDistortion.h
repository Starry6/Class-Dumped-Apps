@interface CIDisplacementDistortion : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIImage inputDisplacementImage;
@property (nonatomic) NSNumber inputScale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)_CIDisplaceFromImage;
- (id)inputDisplacementImage;
- (void)setInputDisplacementImage:;
+ (id)customAttributes;
@end
