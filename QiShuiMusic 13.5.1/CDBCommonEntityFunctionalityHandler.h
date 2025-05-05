@interface CDBCommonEntityFunctionalityHandler : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> lock;
@property (nonatomic) NSMutableSet destructionObservers;
- (id)init;
- (void)dealloc;
- (void)notifyOfEntityDestruction;
- (id)lock;
- (void)addDestructionObserver:;
- (void)removeDestructionObserver:;
- (void).cxx_destruct;
- (void)setDestructionObservers:;
- (id)destructionObservers;
- (void)setLock:;
+ (void)_notifyDestructionObservers:;
@end
