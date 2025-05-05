@interface ARImageCroppingTechnique : ARTechnique
@property (nonatomic) {CGSize=dd} croppedImageSize;
- (void)dealloc;
- (id)processData:;
- (BOOL)isEqual:;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithCroppedImageSize:centerCropToTargetResolution:;
- (id)initWithCroppedImageSize:;
- (id)croppedImageSize;
@end
