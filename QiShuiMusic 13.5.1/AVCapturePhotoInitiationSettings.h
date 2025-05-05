@interface AVCapturePhotoInitiationSettings : NSObject
@property (nonatomic) Q timestamp;
@property (nonatomic) q uniqueID;
@property (nonatomic) q flashMode;
@property (nonatomic) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic) q HDRMode;
@property (nonatomic) BOOL burstQualityCaptureEnabled;
- (void)setFlashMode:;
- (long long)flashMode;
- (long long)uniqueID;
- (void)dealloc;
- (long long)HDRMode;
- (void)setHDRMode:;
- (unsigned long long)timestamp;
- (BOOL)burstQualityCaptureEnabled;
- (BOOL)isAutoStillImageStabilizationEnabled;
- (void)setAutoStillImageStabilizationEnabled:;
- (id)_initWithTimestamp:;
- (void)setBurstQualityCaptureEnabled:;
+ (id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:;
@end
