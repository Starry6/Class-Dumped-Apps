@interface AWEFantaAbstractDataCollector : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSMutableArray dataListeners;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rwLock;
- (void)setRwLock:;
- (void)registerDataListener:;
- (id)dataListeners;
- (void)onDataCollectorInit;
- (void)unRegisterDataListener:;
- (void)notifyListenersWithInfo:;
- (void)setDataListeners:;
- (id)init;
- (void)dealloc;
- (void)setEnabled:;
- (id)type;
- (BOOL)enabled;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
