@interface AWEPerfEvaluateApplogService : NSObject
@property (nonatomic) NSMutableArray observers;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rwLock;
- (void)setRwLock:;
- (id)hookEventArray;
- (void)onEventV3:params:;
- (void)registerObservers:;
- (void)unregisterObserver:;
- (id)init;
- (void)dealloc;
- (id)observers;
- (void)registerObserver:;
- (BOOL)enabled;
- (void).cxx_destruct;
- (void)setObservers:;
@end
