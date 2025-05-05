@interface ByteRTCPublicStreamAudioConfig : NSObject
@property (nonatomic) q sampleRate;
@property (nonatomic) q channels;
@property (nonatomic) q bitrate;
- (long long)channels;
- (long long)sampleRate;
- (long long)bitrate;
- (void)setChannels:;
- (void)setSampleRate:;
- (void)setBitrate:;
@end
