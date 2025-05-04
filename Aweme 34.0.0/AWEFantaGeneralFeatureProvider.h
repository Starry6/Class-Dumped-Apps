@interface AWEFantaGeneralFeatureProvider : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} generalLock;
@property (nonatomic) NSMutableArray searchKeywordList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onDataCollector:collectData:;
- (void)p_addObserver;
- (id)featureForKey:;
- (void)setSearchKeywordList:;
- (id)searchKeywordList;
- (void)p_handleWithApplogEvent:applogParams:;
- (void)loadGeneralProvider;
- (id)generalLock;
- (void)setGeneralLock:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)onApplicationDidEnterBackground:;
+ (id)sharedInstance;
@end
