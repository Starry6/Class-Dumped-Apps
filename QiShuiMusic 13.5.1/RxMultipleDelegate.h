@interface RxMultipleDelegate : NSObject
- (unsigned long long)countForSelector:;
- (id)duplicateInvocation:;
- (BOOL)hasDelegateThatRespondsToSelector:;
- (void)removeAllDelegates;
- (void)removeDelegate:delegateQueue:;
- (id)init;
- (void)dealloc;
- (void)removeDelegate:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (unsigned long long)count;
- (void)doesNotRecognizeSelector:;
- (id)delegateEnumerator;
- (void)doNothing;
- (void)addDelegate:delegateQueue:;
- (unsigned long long)countOfClass:;
@end
