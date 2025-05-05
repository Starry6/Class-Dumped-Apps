@interface CARObserverHashTable : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) BOOL hasObservers;
- (BOOL)hasObservers;
- (void)removeObserver:;
- (id)initWithProtocol:;
- (void)addObserver:;
- (id)methodSignatureForSelector:;
- (id)callbackQueue;
- (id)initWithProtocol:callbackQueue:;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
@end
