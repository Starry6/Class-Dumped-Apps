@interface AnniePretchResModeConfig : NSObject
@property (nonatomic) q anniePrefetchResMode;
@property (nonatomic) BOOL needPreloadJs;
@property (nonatomic) NSString latchInitJs;
@property (nonatomic) NSString prefetchJs;
- (void)setLatchInitJs:;
- (long long)anniePrefetchResMode;
- (id)latchInitJs;
- (BOOL)needPreloadJs;
- (id)prefetchJs;
- (void)setAnniePrefetchResMode:;
- (void)setNeedPreloadJs:;
- (void)setPrefetchJs:;
- (void).cxx_destruct;
@end
