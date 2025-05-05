@interface MNObserverHashTable : NSObject
@property (nonatomic) BOOL hasObservers;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
- (BOOL)hasObservers;
- (void)removeObserver:;
- (id)initWithProtocol:;
- (void)addObserver:;
- (id)methodSignatureForSelector:;
- (void)setCallbackQueue:;
- (id)callbackQueue;
- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:;
- (unsigned long long)count;
@end
