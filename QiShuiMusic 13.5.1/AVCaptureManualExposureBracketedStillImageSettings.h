@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings
@property (nonatomic) {?=qiIq} exposureDuration;
@property (nonatomic) float ISO;
- (id)debugDescription;
- (float)ISO;
- (id)description;
- (id)exposureDuration;
- (id)_initManualExposureSettingsWithExposureDuration:ISO:;
+ (id)manualExposureSettingsWithExposureDuration:ISO:;
@end
