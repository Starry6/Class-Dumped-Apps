@interface LSStreamAudioSource : LSStreamMediaSource
@property (nonatomic) LiveStreamLinkInfo currentLinkInfo;
- (id)currentLinkInfo;
- (id)getNativeSource;
- (void)initOutputParam:channelCount:;
- (id)initWithLinkInfo:;
- (id)linkInfo;
- (void)setCurrentLinkInfo:;
- (void)setupWithMediaEngineFactory:;
- (void)dealloc;
- (void)removeTrack:;
- (void).cxx_destruct;
- (id)trackID;
- (id).cxx_construct;
- (void)addTrack:;
@end
