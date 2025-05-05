@interface VEVideoReader : IESMMObject
@property (nonatomic) BOOL isLatestFrame;
@property (nonatomic) BOOL canUseForCache;
- (id)assetDuration;
- (BOOL)canUseForCache;
- (BOOL)isLatestFrame;
- (id)resUrl;
- (void)setCanUseForCache:;
- (void)setIsLatestFrame:;
- (void)seekToTime:;
- (void)play;
- (id)initWithConfig:;
- (void)stop;
- (void)pause;
- (id)copyNextSampleBuffer;
- (void)updateVideoConfig:;
- (id)copySampleBufferAtTime:;
@end
