@interface CIHexagonalPixellate : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) CIVector inputCenter;
@property (nonatomic) NSNumber inputScale;
- (void)setInputCenter:;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (id)inputCenter;
- (id)outputImage;
- (id)_CIHexagonalPixellate;
+ (id)customAttributes;
@end
