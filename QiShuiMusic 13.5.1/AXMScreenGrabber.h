@interface AXMScreenGrabber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)screenRecorder:didStopRecordingWithPreviewViewController:error:;
- (id)grabScreenWithRect:orientation:options:metrics:error:;
- (id)_ioSurfaceConfigurationWithSize:;
- (id)_renderOptionsForSurface:captureRect:displayName:scaleFactor:ignoredLayerContextIDs:includedLayerContextIDs:;
- (double)_adjustedScaleFactorForInputSize:constrainingToPreferredInputSizeFromDetectors:;
- (void)recordScreenForDuration:completion:;
@end
