@interface ARParentImageSensorSettings : NSObject
@property (nonatomic) BOOL audioCaptureEnabled;
@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) NSArray settings;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)allowCameraInMultipleForegroundAppLayout;
- (void)setAllowCameraInMultipleForegroundAppLayout:;
- (BOOL)audioCaptureEnabled;
- (void)setAudioCaptureEnabled:;
@end
