@interface ByteRTCMixedStreamClientMixConfig : NSObject
@property (nonatomic) BOOL useAudioMixer;
@property (nonatomic) Q videoFormat;
- (void)setUseAudioMixer:;
- (BOOL)useAudioMixer;
- (unsigned long long)videoFormat;
- (id)init;
- (void)setVideoFormat:;
@end
