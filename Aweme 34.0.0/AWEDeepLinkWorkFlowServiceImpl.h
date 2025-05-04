@interface AWEDeepLinkWorkFlowServiceImpl : NSObject
@property (nonatomic) NSMutableArray taskExecutor;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
- (void)setMmkv:;
- (id)mmkv;
- (void)registerAWEDeepLinkWorkFlowService:;
- (id)lastDeepLinkUpdateVersionCode;
- (void)setLastDeepLinkUpdateVersionCode:;
- (void)deepLinkSchemeAcquired:;
- (id)taskExecutor;
- (void)setTaskExecutor:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
