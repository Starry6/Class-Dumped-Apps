@interface HybridObserver : NSObject
@property (nonatomic) NSPointerArray receivers;
- (void)addReceiver:afterObject:;
- (void)addReceiver:beforeObject:;
- (void)compactDelegates;
- (void)removeAllReceiver;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)methodSignatureForSelector:;
- (unsigned long long)indexOfObject:;
- (id)receivers;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)allObjects;
- (unsigned long long)count;
- (void)addReceiver:;
- (void)removeReceiver:;
- (void)setReceivers:;
@end
