@interface AWEVisionCameraManager : NSObject
@property (nonatomic) double zoomFactor;
@property (nonatomic) double maxZoomFactor;
@property (nonatomic) double minZoomFactor;
@property (nonatomic) BOOL supprotZoom;
@property (nonatomic) BOOL enableMultiZoomCapability;
@property (nonatomic) <VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL scanManualOperationZoomFactor;
@property (nonatomic) <ACCCameraScanEvent> delegate;
@property (nonatomic) <ACCCameraScanEvent> globalDelegate;
- (void)setMaxZoomFactor:;
- (void)turnScan:param:completeResult:;
- (void)changeToZoomFactor:;
- (void)setEnableMultiZoomCapability:;
- (void)animationChangeToZoomFactor:;
- (BOOL)currentInVirtualCameraMode;
- (void)scanQrcodeChangeToZoomFactor:byUser:;
- (BOOL)supprotZoom;
- (BOOL)scanManualOperationZoomFactor;
- (BOOL)enableMultiZoomCapability;
- (BOOL)isCameraCapabilitySupportedZoom;
- (void)setSupprotZoom:;
- (BOOL)enableZoomOpt;
- (void)setMinZoomFactor:;
- (void)setScanManualOperationZoomFactor:;
- (void)setScanAnythingEnable:param:;
- (void)setScanQrCodeEnable:multiQrCodeEnable:param:;
- (void)updateConfigScanQrCodeWithParam:;
- (void)setQrCodeCheckEnable:param:;
- (void)addCameraBrightnessObserve;
- (void)openCameraTorch:;
- (BOOL)currentCameraTorchOn;
- (id)globalDelegate;
- (BOOL)verifyCameraContext;
- (void)setGlobalDelegate:;
- (id)camera;
- (double)maxZoomFactor;
- (void)setZoomFactor:;
- (id)delegate;
- (void)setCamera:;
- (double)zoomFactor;
- (void).cxx_destruct;
- (void)setDelegate:;
- (double)minZoomFactor;
@end
