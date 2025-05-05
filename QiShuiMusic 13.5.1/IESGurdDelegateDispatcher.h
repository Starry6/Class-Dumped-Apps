@interface IESGurdDelegateDispatcher : NSObject
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSHashTable delegatesHashTable;
- (id)delegatesHashTable;
- (void)setDelegatesHashTable:;
- (id)protocol;
- (void)setProtocol:;
- (BOOL)respondsToSelector:;
- (void)dealloc;
- (id)methodSignatureForSelector:;
- (void)registerDelegate:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)unregisterDelegate:;
+ (id)dispatcherWithProtocol:;
@end
