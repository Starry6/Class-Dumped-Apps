@interface ARFaceTrackingImageSensor : ARImageSensor
@property (nonatomic) BOOL recordingMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)stop;
- (void)captureOutput:didOutputSampleBuffer:fromConnection:;
- (void).cxx_destruct;
- (void)reconfigure:;
- (void)dataOutputSynchronizer:didOutputSynchronizedDataCollection:;
- (void)captureOutput:didOutputMetadataObjects:fromConnection:;
- (long long)_videoOrientation;
- (unsigned long long)providedDataTypes;
- (id)prepareToStart;
- (id)configureCaptureSession;
- (id)initWithSettings:captureSession:captureQueue:;
- (void)configureCaptureDevice;
- (id)outputsForSynchronizer;
- (id)configureCaptureSessionCalibration;
- (id)_configureMetaDataOutput;
- (void)capturedSynchedOutput:didOutputSampleBuffer:fromVideoConnection:metaDataOutput:didOutputMetadataObjects:didOutputDepthData:atTime:;
- (BOOL)recordingMode;
- (void)setRecordingMode:;
@end
