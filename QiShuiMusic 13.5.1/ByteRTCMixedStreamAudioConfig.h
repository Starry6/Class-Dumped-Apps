@interface ByteRTCMixedStreamAudioConfig : NSObject
@property (nonatomic) q audioCodec;
@property (nonatomic) q sampleRate;
@property (nonatomic) q channels;
@property (nonatomic) q bitrate;
@property (nonatomic) q audioProfile;
- (void)setAudioProfile:;
- (long long)audioProfile;
- (long long)channels;
- (id)init;
- (long long)sampleRate;
- (long long)bitrate;
- (void)setChannels:;
- (void)setSampleRate:;
- (void)setBitrate:;
- (long long)audioCodec;
- (void)setAudioCodec:;
+ (id)toStringWithProfile:;
@end
