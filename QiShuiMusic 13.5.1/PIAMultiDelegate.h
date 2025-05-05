@interface PIAMultiDelegate : NSObject
@property (nonatomic) NSPointerArray delegates;
- (void)addDelegate:afterDelegate:;
- (void)addDelegate:beforeDelegate:;
- (void)compactDelegates;
- (unsigned long long)indexOfDelegate:;
- (id)initWithDelegates:;
- (void)removeAllDelegates;
- (void)addDelegate:;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)removeDelegate:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)forwardInvocation:;
- (id)allObjects;
- (unsigned long long)count;
@end
