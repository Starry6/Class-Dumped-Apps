@interface IESIMRouterDelegateDispatcher : NSObject
@property (nonatomic) NSHashTable delegatesHashTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegatesHashTable;
- (void)setDelegatesHashTable:;
- (BOOL)respondsToSelector:;
- (id)methodSignatureForSelector:;
- (void)registerDelegate:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)unregisterDelegate:;
+ (id)sharedInstance;
@end
