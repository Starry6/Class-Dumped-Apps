@interface VCAudioPowerSpectrumMeter : VCObject
@property (nonatomic) ^v realtimeContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)realtimeContext;
- (id)initWithBinCount:refreshRate:delegate:;
- (void)registerNewAudioPowerSpectrumForStreamToken:powerSpectrumKey:spectrumSource:;
- (void)releaseAudioPowerSpectrumForStreamToken:;
- (void)unregisterAllStreams;
@end
