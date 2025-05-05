@interface ByteRTCTranscodingAudioConfig : NSObject
@property (nonatomic) q codec;
@property (nonatomic) q sampleRate;
@property (nonatomic) q channels;
@property (nonatomic) q kBitRate;
@property (nonatomic) q profile;
- (long long)kBitRate;
- (void)setKBitRate:;
- (long long)channels;
- (id)init;
- (long long)sampleRate;
- (void)setProfile:;
- (long long)profile;
- (long long)codec;
- (void)setChannels:;
- (void)setCodec:;
- (void)setSampleRate:;
+ (id)toStringWithProfile:;
@end
