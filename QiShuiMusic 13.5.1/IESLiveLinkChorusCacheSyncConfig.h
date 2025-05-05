@interface IESLiveLinkChorusCacheSyncConfig : NSObject
@property (nonatomic) NSInteger maxCacheTimeMs;
@property (nonatomic) q mode;
@property (nonatomic) NSInteger videoFps;
- (int)maxCacheTimeMs;
- (void)setMaxCacheTimeMs:;
- (void)setVideoFps:;
- (int)videoFps;
- (id)init;
- (long long)mode;
- (void)setMode:;
@end
