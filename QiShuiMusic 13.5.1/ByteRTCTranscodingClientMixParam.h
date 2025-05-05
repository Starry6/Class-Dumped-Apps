@interface ByteRTCTranscodingClientMixParam : NSObject
@property (nonatomic) BOOL clientMixUseOriginalFrame;
@property (nonatomic) BOOL clientMixUseAudioMixer;
@property (nonatomic) Q clientMixVideoFormat;
- (BOOL)clientMixUseOriginalFrame;
- (void)setClientMixUseOriginalFrame:;
- (BOOL)clientMixUseAudioMixer;
- (void)setClientMixUseAudioMixer:;
- (unsigned long long)clientMixVideoFormat;
- (void)setClientMixVideoFormat:;
- (id)init;
@end
