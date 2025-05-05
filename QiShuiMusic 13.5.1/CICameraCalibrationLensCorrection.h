@interface CICameraCalibrationLensCorrection : CIFilter
@property (nonatomic) CIImage inputImage;
@property (nonatomic) AVCameraCalibrationData inputAVCameraCalibrationData;
@property (nonatomic) NSNumber inputUseInverseLookUpTable;
- (void)setValue:forKey:;
- (id)inputImage;
- (void)setInputImage:;
- (id)outputImage;
- (id)ReferenceensDistortionPointForPoint:lookupTable:distortionOpticalCenter:imageSize:;
- (id)regionOf:destRect:userInfo:;
- (id)inputAVCameraCalibrationData;
- (void)setInputAVCameraCalibrationData:;
- (id)inputUseInverseLookUpTable;
- (void)setInputUseInverseLookUpTable:;
+ (id)customAttributes;
@end
