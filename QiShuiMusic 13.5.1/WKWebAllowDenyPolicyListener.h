@interface WKWebAllowDenyPolicyListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)allow;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCompletionHandler:;
- (void)deny;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
@end
