@interface IESLiveLinkRTCInteractTranscodingAudioConfig : NSObject
@property (nonatomic) NSString codec;
@property (nonatomic) q sampleRate;
@property (nonatomic) q channels;
@property (nonatomic) q kBitRate;
@property (nonatomic) q profile;
- (long long)kBitRate;
- (void)setKBitRate:;
- (long long)channels;
- (long long)sampleRate;
- (void)setProfile:;
- (long long)profile;
- (id)codec;
- (void).cxx_destruct;
- (void)setChannels:;
- (void)setCodec:;
- (void)setSampleRate:;
@end
