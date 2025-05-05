@interface BDXRLPreloadInfoManager : NSObject
@property (nonatomic) NSMutableSet preloadedURLString;
@property (nonatomic) NSMutableSet preloadedChannel;
- (BOOL)isChannelPreloaded:;
- (BOOL)isURLStringPreloaded:;
- (void)markPreloadChannel:;
- (void)markPreloadUrlString:;
- (id)preloadedChannel;
- (id)preloadedURLString;
- (void)setPreloadedChannel:;
- (void)setPreloadedURLString:;
- (id)init;
- (void).cxx_destruct;
@end
