@interface WebGeolocationPolicyListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)allow;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)deny;
- (BOOL)shouldClearCache;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:forWebView:;
@end
