@interface CIRedEyeCorrection : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSString inputCameraModel;
@property (nonatomic) NSDictionary inputCorrectionInfo;
- (void)setDefaults;
- (id)inputImage;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)inputCameraModel;
- (void)setInputCameraModel:;
- (id)inputCorrectionInfo;
- (void)setInputCorrectionInfo:;
@end
