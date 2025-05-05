@interface VCSessionMediaStreamConfigurationProvider : NSObject
@property (nonatomic) NSArray audioStreamConfigurations;
@property (nonatomic) NSArray videoStreamConfigurations;
@property (nonatomic) q highestEncodingResolution;
@property (nonatomic) BOOL isEncodingSqaures;
- (void)dealloc;
- (id)initWithStreamIDGenerator:sessionMode:supportedAudioRules:;
- (BOOL)initializeStreamsWithSupportedAudioRules:;
- (BOOL)initializeVideoStreams;
- (int)streamPayloadFromProviderConfig:;
- (BOOL)initializeVideoStreamWithConfig:streamIndex:;
- (BOOL)initializeVideoStreamWithDefaults;
- (void)audioStreamConfigs:configCount:;
- (BOOL)initializeAudioStreamsWithSupportedRules:;
- (BOOL)initializeAudioStreamWithConfig:maxIDSStreamIDCount:supportedAudioRules:isLowestQualityAudio:;
- (id)audioRuleCollectionWithAudioConfig:supportedAudioRules:;
- (id)videoStreamConfigurations;
- (id)audioStreamConfigurations;
- (long long)highestEncodingResolution;
- (BOOL)isEncodingSqaures;
+ (void)fixAudioStreamConfigurations;
+ (BOOL)audioConfig:supportsDeviceClass:;
+ (void)computeMaxNetworkBitrate:maxMediaBitrate:maxPacketsPerSecond:audioStreamIndex:internalPacketsPerSecond:;
+ (void)computeMaxNetworkBitrate:maxMediaBitrate:maxPacketsPerSecond:maxIDSStreamIDCount:internalPacketsPerSecond:audioConfig:;
+ (BOOL)isAudioStreamOnDemand:isLowestQualityAudio:;
+ (BOOL)isVideoStreamOnDemand:;
@end
