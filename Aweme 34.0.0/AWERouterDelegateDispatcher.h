@interface AWERouterDelegateDispatcher : NSObject
@property (nonatomic) NSHashTable delegatesHashTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegatesHashTable;
- (void)setDelegatesHashTable:;
- (void)registerDelegate:;
- (BOOL)respondsToSelector:;
- (void)unregisterDelegate:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
+ (id)sharedInstance;
@end
