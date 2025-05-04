@interface AWEListKitDelegateDispatcher : NSObject
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) NSHashTable delegatesHashTable;
- (id)delegatesHashTable;
- (void)setDelegatesHashTable:;
- (void)registerDelegate:;
- (void)setProtocol:;
- (id)protocol;
- (void)setLock:;
- (id)lock;
- (BOOL)respondsToSelector:;
- (void)unregisterDelegate:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
+ (id)dispatcherWithProtocol:;
@end
