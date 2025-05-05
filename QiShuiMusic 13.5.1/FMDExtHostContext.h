@interface FMDExtHostContext : FMDExtensionContext
@property (nonatomic) <FMDExtAccessoryDelegateProtocol> accessoryDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)accessoryDelegate;
- (void)setAccessoryDelegate:;
@end
