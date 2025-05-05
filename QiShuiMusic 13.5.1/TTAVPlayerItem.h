@interface TTAVPlayerItem : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSError error;
@property (nonatomic) q loadedProgress;
@property (nonatomic) BOOL playbackBufferEmpty;
@property (nonatomic) BOOL playbackLikelyToKeepUp;
@property (nonatomic) BOOL playbackBufferFull;
@property (nonatomic) NSURL url;
@property (nonatomic) {?=qiIq} duration;
- (long long)loadedProgress;
- (void)setLoadedProgress:;
- (void)setPlaybackBufferEmpty:;
- (void)setPlaybackBufferFull:;
- (void)setPlaybackLikelyToKeepUp:;
- (void)setStatus:;
- (id)url;
- (id)initWithURL:;
- (void)setError:;
- (id)error;
- (void)setUrl:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)status;
- (id)duration;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackBufferEmpty;
+ (id)playerItemWithURL:;
@end
