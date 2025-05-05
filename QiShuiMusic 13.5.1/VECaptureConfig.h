@interface VECaptureConfig : NSObject
@property (nonatomic) NSString capturePreset;
@property (nonatomic) Q preferedFrameRate;
@property (nonatomic) q orientation;
@property (nonatomic) BOOL isMirrored;
@property (nonatomic) float zoomFactor;
@property (nonatomic) q devicePosition;
- (id)capturePreset;
- (unsigned long long)preferedFrameRate;
- (void)setCapturePreset:;
- (void)setIsMirrored:;
- (void)setPreferedFrameRate:;
- (id)init;
- (long long)devicePosition;
- (void)setZoomFactor:;
- (long long)orientation;
- (float)zoomFactor;
- (void)setDevicePosition:;
- (void)setup;
- (void).cxx_destruct;
- (BOOL)isMirrored;
- (void)setOrientation:;
@end
