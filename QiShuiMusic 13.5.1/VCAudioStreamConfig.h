@interface VCAudioStreamConfig : VCMediaStreamConfig
@property (nonatomic) q audioStreamMode;
@property (nonatomic) NSDictionary codecConfigurations;
@property (nonatomic) BOOL redEnabled;
@property (nonatomic) C numRedundantPayloads;
@property (nonatomic) NSArray supportedNumRedundantPayload;
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) BOOL forceEVSWideBand;
@property (nonatomic) float volume;
@property (nonatomic) BOOL shouldApplyRedAsBoolean;
@property (nonatomic) BOOL supportsAdaptation;
@property (nonatomic) NSInteger bundlingScheme;
@property (nonatomic) BOOL useExternalIO;
@property (nonatomic) BOOL useWifiTiers;
@property (nonatomic) r^{tagVCAudioFrameFormat={AudioStreamBasicDescription=dIIIIIIII}I} externalIOFormat;
@property (nonatomic) NSInteger oneToOneOperatingMode;
@property (nonatomic) I channelCount;
@property (nonatomic) BOOL dtmfTonePlaybackEnabled;
@property (nonatomic) I dtmfSampleRate;
@property (nonatomic) BOOL anbrEnabled;
@property (nonatomic) q subscriptionSlot;
@property (nonatomic) BOOL isLowLatency;
- (id)init;
- (float)volume;
- (void)dealloc;
- (void)setChannelCount:;
- (void)setVolume:;
- (BOOL)supportsAdaptation;
- (unsigned int)channelCount;
- (long long)subscriptionSlot;
- (void)setSubscriptionSlot:;
- (void)setEnableMaxBitrateOnNoChangeCMR:;
- (void)setNumRedundantPayloads:;
- (long long)audioStreamMode;
- (void)setAudioStreamMode:;
- (id)codecConfigurations;
- (id)initWithClientDictionary:;
- (int)bundlingScheme;
- (void)setBundlingScheme:;
- (void)setSupportsAdaptation:;
- (BOOL)isRedEnabled;
- (id)supportedNumRedundantPayload;
- (BOOL)shouldApplyRedAsBoolean;
- (void)setShouldApplyRedAsBoolean:;
- (BOOL)useWifiTiers;
- (void)setUseWifiTiers:;
- (BOOL)setupCodecWithClientDictionary:;
- (void)setupRedWithRxPayload:txPayload:;
- (BOOL)setupCNCodecWithClientDictionary:;
- (BOOL)setupDTMFCodecWithClientDictionary:;
- (void)setExternalIOFormat:;
- (id)externalIOFormat;
- (void)addCodecConfiguration:;
- (void)addSupportedNumRedundantPayload:;
- (unsigned char)numRedundantPayloads;
- (BOOL)enableMaxBitrateOnNoChangeCMR;
- (BOOL)forceEVSWideBand;
- (void)setForceEVSWideBand:;
- (int)oneToOneOperatingMode;
- (void)setOneToOneOperatingMode:;
- (BOOL)dtmfTonePlaybackEnabled;
- (void)setDtmfTonePlaybackEnabled:;
- (unsigned int)dtmfSampleRate;
- (void)setDtmfSampleRate:;
- (BOOL)anbrEnabled;
- (void)setAnbrEnabled:;
- (BOOL)isLowLatency;
- (void)setIsLowLatency:;
- (BOOL)useExternalIO;
+ (int)bundlingSchemeForAudioStreamMode:payloadType:;
@end
