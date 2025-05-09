@interface SiriTTSInstrumentationMetrics : NSObject
@property (nonatomic) NSString voiceAssetKey;
@property (nonatomic) NSString voiceResourceAssetKey;
@property (nonatomic) NSString utterance;
@property (nonatomic) SiriTTSSynthesisVoice voice;
@property (nonatomic) SiriTTSSynthesisResource resource;
@property (nonatomic) NSString audioOutputRoute;
@property (nonatomic) NSString clientBundleIdentifier;
@property (nonatomic) NSString experimentIdentifier;
@property (nonatomic) Q requestCreatedTime;
@property (nonatomic) double eagerRequestGapInterval;
@property (nonatomic) Q synthesisBeginTime;
@property (nonatomic) Q synthesisEndTime;
@property (nonatomic) Q speechBeginTime;
@property (nonatomic) Q speechEndTime;
@property (nonatomic) Q speechEstimatedOutputBeginTime;
@property (nonatomic) double audioStartLatency;
@property (nonatomic) Q serverFirstPacketTime;
@property (nonatomic) Q serverLastPacketTime;
@property (nonatomic) double serverStreamedAudioDuration;
@property (nonatomic) double audioDuration;
@property (nonatomic) BOOL isWarmStart;
@property (nonatomic) q sourceOfTTS;
@property (nonatomic) BOOL privacySensitive;
@property (nonatomic) q errorCode;
@property (nonatomic) BOOL isServerTTSRacing;
@property (nonatomic) q promptCount;
@property (nonatomic) BOOL neuralAlignmentStall;
@property (nonatomic) BOOL neuralAudioClick;
@property (nonatomic) BOOL neuralFallback;
@property (nonatomic) BOOL isAudibleRequest;
@property (nonatomic) NSString description;
- (id)voiceAssetKey;
- (id)voiceResourceAssetKey;
- (id)clientBundleIdentifier;
- (id)init;
- (long long)errorCode;
- (void)setVoice:;
- (void)setResource:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setErrorCode:;
- (id)voice;
- (void).cxx_destruct;
- (id)resource;
- (id)description;
- (void)setClientBundleIdentifier:;
- (id)utterance;
- (void)setUtterance:;
- (long long)promptCount;
- (void)setPromptCount:;
- (double)audioDuration;
- (BOOL)privacySensitive;
- (void)setPrivacySensitive:;
- (unsigned long long)requestCreatedTime;
- (void)setRequestCreatedTime:;
- (id)audioOutputRoute;
- (void)setAudioOutputRoute:;
- (id)experimentIdentifier;
- (void)setExperimentIdentifier:;
- (double)eagerRequestGapInterval;
- (void)setEagerRequestGapInterval:;
- (unsigned long long)synthesisBeginTime;
- (void)setSynthesisBeginTime:;
- (unsigned long long)synthesisEndTime;
- (void)setSynthesisEndTime:;
- (unsigned long long)speechBeginTime;
- (void)setSpeechBeginTime:;
- (unsigned long long)speechEndTime;
- (void)setSpeechEndTime:;
- (unsigned long long)speechEstimatedOutputBeginTime;
- (void)setSpeechEstimatedOutputBeginTime:;
- (double)audioStartLatency;
- (void)setAudioStartLatency:;
- (unsigned long long)serverFirstPacketTime;
- (void)setServerFirstPacketTime:;
- (unsigned long long)serverLastPacketTime;
- (void)setServerLastPacketTime:;
- (double)serverStreamedAudioDuration;
- (void)setServerStreamedAudioDuration:;
- (void)setAudioDuration:;
- (BOOL)isWarmStart;
- (void)setIsWarmStart:;
- (long long)sourceOfTTS;
- (void)setSourceOfTTS:;
- (BOOL)isServerTTSRacing;
- (void)setIsServerTTSRacing:;
- (BOOL)neuralAlignmentStall;
- (void)setNeuralAlignmentStall:;
- (BOOL)neuralAudioClick;
- (void)setNeuralAudioClick:;
- (BOOL)neuralFallback;
- (void)setNeuralFallback:;
- (BOOL)isAudibleRequest;
- (void)setIsAudibleRequest:;
+ (BOOL)supportsSecureCoding;
+ (void)setSupportsSecureCoding:;
@end
