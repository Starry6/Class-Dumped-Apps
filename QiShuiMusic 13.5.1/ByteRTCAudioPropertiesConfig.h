@interface ByteRTCAudioPropertiesConfig : NSObject
@property (nonatomic) q interval;
@property (nonatomic) BOOL enableSpectrum;
@property (nonatomic) BOOL enableVad;
@property (nonatomic) q localMainReportMode;
@property (nonatomic) float smooth;
@property (nonatomic) q audioReportMode;
@property (nonatomic) BOOL enableVoicePitch;
@property (nonatomic) BOOL enableDeviceLoopDelay;
- (void)setEnableSpectrum:;
- (void)setEnableVad:;
- (void)setLocalMainReportMode:;
- (float)smooth;
- (BOOL)enableSpectrum;
- (BOOL)enableVad;
- (long long)localMainReportMode;
- (long long)audioReportMode;
- (void)setAudioReportMode:;
- (BOOL)enableVoicePitch;
- (void)setEnableVoicePitch:;
- (BOOL)enableDeviceLoopDelay;
- (void)setEnableDeviceLoopDelay:;
- (id)init;
- (void)setInterval:;
- (long long)interval;
- (void)setSmooth:;
@end
