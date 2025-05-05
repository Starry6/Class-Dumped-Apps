@interface PuzzleStateCenterService : NSObject
@property (nonatomic) NSMutableDictionary observers;
@property (nonatomic) NSMutableDictionary stateData;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} observersLock;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} dataLock;
- (id)getStateWithKey:;
- (id)getStatesWithKeys:;
- (void)registeredObserver:withKey:;
- (void)setSateKey:value:;
- (void)unregisteredObserver:withKey:;
- (id)observersLock;
- (id)init;
- (id)dataLock;
- (void)setObserversLock:;
- (void).cxx_destruct;
- (void)setDataLock:;
- (void)setObservers:;
- (id)observers;
- (id)stateData;
- (void)setStateData:;
+ (id)sharedService;
@end
