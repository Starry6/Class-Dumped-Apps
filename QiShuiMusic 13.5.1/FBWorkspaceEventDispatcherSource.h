@interface FBWorkspaceEventDispatcherSource : NSObject
@property (nonatomic) RBSProcessHandle processHandle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)consumeRemnantsPassingTest:;
- (id)processHandle;
- (void).cxx_destruct;
- (id)_initWithProcessHandle:underlyingAssertion:;
- (void)noteHandshakeWithRemnants:;
- (void)invalidate;
@end
