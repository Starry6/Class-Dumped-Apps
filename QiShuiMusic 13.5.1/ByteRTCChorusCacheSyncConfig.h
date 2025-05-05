@interface ByteRTCChorusCacheSyncConfig : NSObject
@property (nonatomic) NSInteger maxCacheTimeMs;
@property (nonatomic) Q mode;
@property (nonatomic) NSInteger videoFps;
- (int)maxCacheTimeMs;
- (void)setMaxCacheTimeMs:;
- (void)setVideoFps:;
- (int)videoFps;
- (id)init;
- (unsigned long long)mode;
- (void)setMode:;
@end
