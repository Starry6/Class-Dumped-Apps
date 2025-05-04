@interface AWEECMallContainerOptManager : NSObject
@property (nonatomic) NSMutableArray optSceneArray;
@property (nonatomic) NSHashTable optSceneTable;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} mutexLock;
@property (nonatomic) NSString prefetchRequestId;
@property (nonatomic) BOOL enableWeakContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registContainerOptScene:;
- (void)launchPrepare;
- (id)tabMallPrefetchId;
- (void)setEnableWeakContainer:;
- (BOOL)enableWeakContainer;
- (void)setOptSceneTable:;
- (void)setOptSceneArray:;
- (id)optSceneTable;
- (id)optSceneArray;
- (void)setPrefetchRequestId:;
- (id)scenesEnumerator;
- (id)prefetchRequestId;
- (id)mutexLock;
- (void)setMutexLock:;
- (id)init;
- (void)prepare;
- (void).cxx_destruct;
+ (id)shareManager;
@end
