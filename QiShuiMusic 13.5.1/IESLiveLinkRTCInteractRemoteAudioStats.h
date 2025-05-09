@interface IESLiveLinkRTCInteractRemoteAudioStats : NSObject
@property (nonatomic) NSString strUID;
@property (nonatomic) float audioLossRate;
@property (nonatomic) float receivedKBitrate;
@property (nonatomic) q stallCount;
@property (nonatomic) q stallDuration;
@property (nonatomic) q playoutSampleRate;
@property (nonatomic) q e2eDelay;
@property (nonatomic) q statsInterval;
@property (nonatomic) q rtt;
@property (nonatomic) q quality;
@property (nonatomic) q jitterBufferDelay;
@property (nonatomic) q numChannels;
@property (nonatomic) q receivedSampleRate;
@property (nonatomic) q frozenRate;
@property (nonatomic) q concealedSamples;
@property (nonatomic) q concealmentEvent;
@property (nonatomic) q decSampleRate;
@property (nonatomic) q decDuration;
- (void)setDecDuration:;
- (float)audioLossRate;
- (long long)concealedSamples;
- (long long)concealmentEvent;
- (long long)decDuration;
- (long long)decSampleRate;
- (long long)e2eDelay;
- (long long)frozenRate;
- (long long)jitterBufferDelay;
- (long long)playoutSampleRate;
- (float)receivedKBitrate;
- (long long)receivedSampleRate;
- (void)setAudioLossRate:;
- (void)setConcealedSamples:;
- (void)setConcealmentEvent:;
- (void)setDecSampleRate:;
- (void)setE2eDelay:;
- (void)setFrozenRate:;
- (void)setJitterBufferDelay:;
- (void)setPlayoutSampleRate:;
- (void)setReceivedKBitrate:;
- (void)setReceivedSampleRate:;
- (void)setStallCount:;
- (void)setStallDuration:;
- (void)setStatsInterval:;
- (void)setStrUID:;
- (long long)stallCount;
- (long long)stallDuration;
- (long long)statsInterval;
- (id)strUID;
- (long long)quality;
- (void)setQuality:;
- (void).cxx_destruct;
- (long long)rtt;
- (void)setRtt:;
- (long long)numChannels;
- (void)setNumChannels:;
@end
