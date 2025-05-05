@interface IESLiveLinkLiveTranscoder : NSObject
- (void)setupWithParam:;
- (id)mixType;
- (id)getMultiChorusParam;
- (void)setMultiChorusParam:;
- (void)startLiveTranscoding;
- (void)stopLiveTranscoding;
- (void)updateAuthInfo:FrameType:;
- (void)updateLiveTranscodingLayout:;
- (void)updateStreamingOutputSize:withBitrate:withFps:;
- (void)updateWaterMark:;
- (void)updateWithParam:;
@end
