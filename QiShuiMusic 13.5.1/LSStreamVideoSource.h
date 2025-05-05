@interface LSStreamVideoSource : LSStreamMediaSource
@property (nonatomic) LiveStreamLinkInfo currentLinkInfo;
@property (nonatomic) BOOL mReduceMode;
- (id)currentLinkInfo;
- (void)setMReduceMode:;
- (id)initWithLinkInfo:withReduceMode:;
- (id)linkInfo;
- (BOOL)mReduceMode;
- (void)pushVideoBuffer:texture:andCMTime:;
- (void)setCurrentLinkInfo:;
- (void)setupWithMediaEngineFactory:;
- (void)dealloc;
- (void)removeTrack:;
- (void).cxx_destruct;
- (id)trackID;
- (id).cxx_construct;
- (void)addTrack:;
@end
