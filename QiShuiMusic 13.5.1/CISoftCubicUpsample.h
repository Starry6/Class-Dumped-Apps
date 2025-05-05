@interface CISoftCubicUpsample : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
- (id)_scale;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
+ (id)customAttributes;
@end
