@interface AWEIronManBusinessMethodManager : NSObject
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} gRWLock;
@property (nonatomic) NSMutableDictionary businessMethodMap;
- (void)registerEventName:handler:;
- (id)businessMethodMap;
- (void)bdp_callBusinessMethodWithParam:completion:;
- (id)bdp_callBusinessMethodSyncWithParam:error:;
- (void)notifyAppWithUniqueID:eventName:jsonString:;
- (id)gRWLock;
- (void)setGRWLock:;
- (void)setBusinessMethodMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
