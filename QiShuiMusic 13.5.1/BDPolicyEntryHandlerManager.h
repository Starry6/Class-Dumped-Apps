@interface BDPolicyEntryHandlerManager : NSObject
@property (nonatomic) NSMutableArray handlers;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} lock;
- (void)addEntryHandler:;
- (id)getHandlers;
- (void)removeEntryHandler:;
- (id)handlers;
- (void)setHandlers:;
- (id)init;
- (void)dealloc;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (void)removeAllHandlers;
+ (id)sharedInstance;
@end
