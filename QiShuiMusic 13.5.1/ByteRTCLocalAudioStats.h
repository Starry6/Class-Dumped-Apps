@interface ByteRTCLocalAudioStats : NSObject
@property (nonatomic) float audioLossRate;
@property (nonatomic) float sentKBitrate;
@property (nonatomic) q recordSampleRate;
@property (nonatomic) q statsInterval;
@property (nonatomic) q rtt;
@property (nonatomic) q numChannels;
@property (nonatomic) q sentSampleRate;
@property (nonatomic) q jitter;
- (float)audioLossRate;
- (long long)recordSampleRate;
- (float)sentKBitrate;
- (long long)sentSampleRate;
- (void)setAudioLossRate:;
- (void)setRecordSampleRate:;
- (void)setSentKBitrate:;
- (void)setSentSampleRate:;
- (void)setStatsInterval:;
- (long long)statsInterval;
- (void)setJitter:;
- (long long)jitter;
- (long long)rtt;
- (void)setRtt:;
- (long long)numChannels;
- (void)setNumChannels:;
@end
