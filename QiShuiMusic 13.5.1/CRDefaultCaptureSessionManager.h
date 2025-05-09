@interface CRDefaultCaptureSessionManager : NSObject
@property (nonatomic) AVCaptureSession captureSession;
@property (nonatomic) AVCaptureVideoPreviewLayer avfPreviewLayer;
@property (nonatomic) AVCaptureDeviceInput deviceInput;
@property (nonatomic) AVCaptureVideoDataOutput captureVideoDataOutput;
@property (nonatomic) @ inputPortFormatObserver;
@property (nonatomic) AVCaptureInputPort inputPortFormatSender;
@property (nonatomic) float maxISO;
@property (nonatomic) float minISO;
@property (nonatomic) {?=qiIq} highISOThresholdDuration;
@property (nonatomic) BOOL exposureAdjustmentInProgress;
@property (nonatomic) NSInteger exposureAdjustmentInProgressTimeoutCount;
@property (nonatomic) BOOL runningManualExposure;
@property (nonatomic) ^{?=^{?}idd} exposure_table;
@property (nonatomic) q cameraPosition;
@property (nonatomic) NSString cameraMode;
@property (nonatomic) q whiteBalanceMode;
@property (nonatomic) q focusMode;
@property (nonatomic) q exposureMode;
@property (nonatomic) q torchMode;
@property (nonatomic) <AVCaptureVideoDataOutputSampleBufferDelegate> captureSessionDelegate;
@property (nonatomic) <AVCaptureMetadataOutputObjectsDelegate> captureSessionMetadataDelegate;
@property (nonatomic) CALayer previewLayer;
@property (nonatomic) NSString currentDeviceID;
@property (nonatomic) BOOL enableMetadataOutput;
@property (nonatomic) {CGSize=dd} cameraResolution;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)torchMode;
- (void)setTorchMode:;
- (long long)exposureMode;
- (void)setWhiteBalanceMode:;
- (float)minISO;
- (long long)cameraPosition;
- (long long)focusMode;
- (BOOL)isRunning;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setExposureMode:;
- (id)focusPointOfInterest;
- (BOOL)isAdjustingFocus;
- (void)setFocusMode:;
- (void).cxx_destruct;
- (float)maxISO;
- (long long)whiteBalanceMode;
- (void)stopRunning;
- (void)startRunning;
- (id)frontFacingCamera;
- (void)setPreviewOrientation:;
- (id)captureSession;
- (void)setCaptureSession:;
- (void)setCameraPosition:;
- (BOOL)toggleCamera;
- (id)previewLayer;
- (void)cameraSessionWasInterrupted:;
- (void)setupCameraSession;
- (void)teardownCameraSession;
- (BOOL)switchToCamera:;
- (BOOL)switchToCameraWithDeviceID:;
- (void)refocusOnPoint:;
- (void)refocusOnPoint:exposure:;
- (void)resetFocus;
- (id)convertCameraPoint:fromLayer:;
- (id)convertCameraPoint:toLayer:;
- (id)convertCameraPoint:toLayer:flipped:;
- (id)convertCameraRect:fromLayer:;
- (id)convertCameraPointOCR:toLayer:flipped:;
- (void)highISOAdjustExposure;
- (BOOL)isPreviewVideoMirrored;
- (id)previewVisibleRect;
- (int)targetVideoFormat;
- (id)cameraMode;
- (void)setCameraMode:;
- (id)captureSessionDelegate;
- (void)setCaptureSessionDelegate:;
- (id)captureSessionMetadataDelegate;
- (void)setCaptureSessionMetadataDelegate:;
- (id)currentDeviceID;
- (void)setCurrentDeviceID:;
- (BOOL)enableMetadataOutput;
- (void)setEnableMetadataOutput:;
- (id)cameraResolution;
- (void)setCameraResolution:;
- (void)cacheCameraResolution:;
- (void)setupCameraSessionWithCaptureDevice:;
- (void)changeCameraConfiguration;
- (BOOL)isRearCamera;
- (unsigned long long)cameraCount;
- (id)backFacingCamera;
- (id)captureDeviceWithPosition:;
- (id)captureDeviceWithIdentifier:;
- (void)_refocusOnPoint:focusMode:exposure:;
- (void)setupHighISO:;
- (id)avfPreviewLayer;
- (void)setAvfPreviewLayer:;
- (id)deviceInput;
- (void)setDeviceInput:;
- (id)captureVideoDataOutput;
- (void)setCaptureVideoDataOutput:;
- (id)inputPortFormatObserver;
- (void)setInputPortFormatObserver:;
- (id)inputPortFormatSender;
- (void)setInputPortFormatSender:;
- (void)setMaxISO:;
- (void)setMinISO:;
- (id)highISOThresholdDuration;
- (void)setHighISOThresholdDuration:;
- (BOOL)exposureAdjustmentInProgress;
- (void)setExposureAdjustmentInProgress:;
- (int)exposureAdjustmentInProgressTimeoutCount;
- (void)setExposureAdjustmentInProgressTimeoutCount:;
- (BOOL)runningManualExposure;
- (void)setRunningManualExposure:;
- (id)exposure_table;
- (void)setExposure_table:;
@end
