@interface CIRedEyeCorrections : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) NSString inputCameraModel;
@property (nonatomic) NSArray inputCorrectionInfo;
- (void)setDefaults;
- (id)_outputProperties;
- (id)inputImage;
- (id)_initFromProperties:;
- (void)setInputImage:;
- (BOOL)_isIdentity;
- (id)outputImage;
- (id)inputCameraModel;
- (void)setInputCameraModel:;
- (id)inputCorrectionInfo;
- (void)setInputCorrectionInfo:;
@end
