@interface VEAudioEncodeConfig : NSObject
@property (nonatomic) q bitrate;
@property (nonatomic) q sampleRate;
@property (nonatomic) q channel;
- (id)toToolboxDicConfig;
- (void)setChannel:;
- (id)init;
- (long long)channel;
- (long long)sampleRate;
- (long long)bitrate;
- (id)copyWithZone:;
- (void)setSampleRate:;
- (void)setBitrate:;
+ (id)audioEncodeConfigWithChannel:sampleRate:bitrate:;
@end
