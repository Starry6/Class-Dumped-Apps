@interface CIPhotoEffect : CIFilter
@property (nonatomic) CIImage inputImage;
- (void)setDefaults;
- (id)init;
- (int)_maxVersion;
- (id)inputImage;
- (void)setInputImage:;
- (int)_defaultVersion;
- (id)outputImage;
- (id)cubeName;
- (id)cubePath;
- (id)cubeColorSpaceName;
+ (id)customAttributes;
@end
