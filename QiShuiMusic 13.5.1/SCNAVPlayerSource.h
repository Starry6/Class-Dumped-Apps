@interface SCNAVPlayerSource : SCNTextureSource
@property (nonatomic) AVPlayer player;
- (id)init;
- (void)dealloc;
- (id)player;
- (void)setPlayer:;
- (void)cleanup:;
- (id)metalTextureWithEngineContext:textureSampler:nextFrameTime:status:;
- (void)connectToProxy:;
- (void)discardVideoData;
- (void)setVideoSourceFormat:;
- (void)registerPlayer:;
- (void)unregisterPlayer:;
@end
