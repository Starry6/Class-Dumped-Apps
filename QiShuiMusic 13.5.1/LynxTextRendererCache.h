@interface LynxTextRendererCache : NSObject
@property (nonatomic) q hitCount;
@property (nonatomic) q missCount;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_suitableRendererWithString:layoutSpec:;
- (BOOL)isEnableCache:;
- (long long)missCount;
- (id)rendererWithString:layoutSpec:;
- (void)setMissCount:;
- (void)startTimeCounter;
- (unsigned long long)totalCostLimitFromSettings;
- (void)clearCache;
- (id)init;
- (void)setHitCount:;
- (void)setTimer:;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
- (id)timer;
- (long long)hitCount;
+ (id)cache;
@end
