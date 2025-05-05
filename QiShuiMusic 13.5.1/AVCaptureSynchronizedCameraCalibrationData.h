@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData
@property (nonatomic) AVCameraCalibrationData cameraCalibrationData;
@property (nonatomic) BOOL cameraCalibrationDataWasDropped;
@property (nonatomic) q droppedReason;
- (void)dealloc;
- (id)cameraCalibrationData;
- (long long)droppedReason;
- (id)_initWithCameraCalibrationData:timestamp:cameraCalibrationDataWasDropped:droppedReason:;
- (BOOL)cameraCalibrationDataWasDropped;
@end
