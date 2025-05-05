@interface BDADWebMultiDelegate : NSProxy
@property (nonatomic) NSObject mainDelegate;
@property (nonatomic) NSHashTable delegates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mainDelegate;
- (void)removeAllDelegates;
- (void)setMainDelegate:;
- (void)addDelegate:;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)delegates;
- (void)setDelegates:;
- (void)removeDelegate:;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
+ (id)webDelegateWithMainDelegate:;
@end
