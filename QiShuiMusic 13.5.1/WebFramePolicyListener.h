@interface WebFramePolicyListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)download;
- (void)dealloc;
- (void).cxx_destruct;
- (void)continue;
- (void)invalidate;
- (id).cxx_construct;
- (void)ignore;
- (void)use;
- (id)initWithFrame:identifier:policyFunction:defaultPolicy:;
- (id)initWithFrame:identifier:policyFunction:defaultPolicy:appLinkURL:;
- (void)receivedPolicyDecision:;
@end
