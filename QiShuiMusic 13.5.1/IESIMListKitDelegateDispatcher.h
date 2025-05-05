@interface IESIMListKitDelegateDispatcher : NSObject
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) NSHashTable delegatesHashTable;
- (id)delegatesHashTable;
- (void)setDelegatesHashTable:;
- (id)protocol;
- (void)setProtocol:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void)registerDelegate:;
- (id)lock;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)setLock:;
- (void)unregisterDelegate:;
+ (id)dispatcherWithProtocol:;
@end
