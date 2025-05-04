@interface AWEStudioRecorderFeatureCaptureConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) <AWEStudioFeatureFrameRatioItemProtocol> ratioStatusItem;
@property (nonatomic) double frontCameraZoomFactor;
@property (nonatomic) double rearCameraZoomFactor;
@property (nonatomic) <AWEStudioFeatureCameraPositionItemProtocol> cameraPositionStatusItem;
@property (nonatomic) BOOL disableAutoSwitchToFrontCameraWhenApplyProp;
@property (nonatomic) NSNumber viewfinderCornerRadius;
@property (nonatomic) ^v mainSessionCameraContext;
@property (nonatomic) BOOL usePreviousCamera;
- (id)ratioStatusItem;
- (void)setRatioStatusItem:;
- (double)frontCameraZoomFactor;
- (void)setFrontCameraZoomFactor:;
- (double)rearCameraZoomFactor;
- (void)setRearCameraZoomFactor:;
- (id)cameraPositionStatusItem;
- (void)setCameraPositionStatusItem:;
- (BOOL)disableAutoSwitchToFrontCameraWhenApplyProp;
- (void)setDisableAutoSwitchToFrontCameraWhenApplyProp:;
- (id)viewfinderCornerRadius;
- (void)setViewfinderCornerRadius:;
- (id)mainSessionCameraContext;
- (void)setMainSessionCameraContext:;
- (BOOL)usePreviousCamera;
- (void)setUsePreviousCamera:;
- (void).cxx_destruct;
@end
