@interface AVCaptureMultiCamSession : AVCaptureSession
@property (nonatomic) float hardwareCost;
@property (nonatomic) float systemPressureCost;
- (id)init;
- (void)_removeConnection:;
- (void)dealloc;
- (float)hardwareCost;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)startRunning;
- (BOOL)_canAddConnection:failureReason:;
- (BOOL)_addConnection:exceptionReason:;
- (void)handleVideoInputDevice:activeFormatChanged:;
- (float)systemPressureCost;
- (BOOL)canSetSessionPreset:;
- (BOOL)_canAddInput:failureReason:;
- (BOOL)_canAddOutput:failureReason:;
- (void)_updateCosts;
- (void)_updateHardwareCost;
- (float)_computeISPHardwareCost;
- (void)_updateSystemPressureCost;
- (id)_physicalDevicePowerInfoSet;
+ (BOOL)isMultiCamSupported;
@end
