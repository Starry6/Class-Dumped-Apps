@interface AWEDataLayerNetworkMetricsManager : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSMapTable tokenToMetricsBlocksMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportMetrics:forToken:;
- (id)tokenToMetricsBlocksMap;
- (void)addMetricsBlock:forToken:;
- (void)setTokenToMetricsBlocksMap:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
