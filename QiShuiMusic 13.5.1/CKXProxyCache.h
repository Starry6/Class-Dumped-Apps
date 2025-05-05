@interface CKXProxyCache : NSObject
@property (nonatomic) NSMapTable cachedProxies;
@property (nonatomic) NSMutableArray scopedProxies;
@property (nonatomic) q totalProxiesCreated;
@property (nonatomic) q totalProxiesReclaimed;
@property (nonatomic) q totalProxiesRetainedOutOfScope;
- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)proxyForClass:withScope:;
- (void)_putBackProxyWithoutCheckingScope:;
- (void)putBackAllProxiesWithScope:;
- (long long)totalProxiesCreated;
- (void)setTotalProxiesCreated:;
- (long long)totalProxiesReclaimed;
- (void)setTotalProxiesReclaimed:;
- (long long)totalProxiesRetainedOutOfScope;
- (void)setTotalProxiesRetainedOutOfScope:;
- (id)cachedProxies;
- (void)setCachedProxies:;
- (id)scopedProxies;
- (void)setScopedProxies:;
@end
