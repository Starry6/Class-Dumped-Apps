@interface HybridResourceCache : NSObject
@property (nonatomic) q size;
@property (nonatomic) NSCache sharedCache;
- (void)setResource:forKey:;
- (void)setupWithSize:;
- (void)removeAll;
- (void).cxx_destruct;
- (void)setSharedCache:;
- (id)sharedCache;
- (void)removeObjectForKey:;
- (void)setSize:;
- (long long)size;
- (id)resourceForKey:;
+ (id)getKeyFromParamConfig:;
+ (id)sharedInstance;
@end
