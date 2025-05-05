@interface ByteRTCAudioPropertiesInfo : NSObject
@property (nonatomic) q linearVolume;
@property (nonatomic) q nonlinearVolume;
@property (nonatomic) q vad;
@property (nonatomic) NSArray spectrum;
@property (nonatomic) q voicePitch;
@property (nonatomic) q deviceLoopDelay;
- (long long)linearVolume;
- (void)setLinearVolume:;
- (long long)nonlinearVolume;
- (void)setNonlinearVolume:;
- (void)setSpectrum:;
- (long long)voicePitch;
- (void)setVoicePitch:;
- (long long)deviceLoopDelay;
- (void)setDeviceLoopDelay:;
- (void).cxx_destruct;
- (long long)vad;
- (void)setVad:;
- (id)spectrum;
@end
