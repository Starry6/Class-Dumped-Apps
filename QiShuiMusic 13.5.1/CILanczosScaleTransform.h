@interface CILanczosScaleTransform : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSNumber inputScale;
@property (nonatomic) NSNumber inputAspectRatio;
- (id)inputScale;
- (void)setInputScale:;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)outputImageNewScaleX:scaleY:;
- (id)outputImageOldScaleX:scaleY:;
- (id)inputAspectRatio;
- (void)setInputAspectRatio:;
+ (id)customAttributes;
@end
