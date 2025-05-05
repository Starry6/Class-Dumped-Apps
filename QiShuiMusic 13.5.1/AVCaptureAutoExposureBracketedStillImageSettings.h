@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings
@property (nonatomic) float exposureTargetBias;
- (float)exposureTargetBias;
- (id)debugDescription;
- (id)description;
- (id)_initAutoExposureSettingsWithExposureTargetBias:;
+ (id)autoExposureSettingsWithExposureTargetBias:;
@end
