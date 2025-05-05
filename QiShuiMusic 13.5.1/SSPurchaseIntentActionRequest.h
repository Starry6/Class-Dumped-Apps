@interface SSPurchaseIntentActionRequest : SSRequest
@property (nonatomic) NSString appBundleId;
@property (nonatomic) Q action;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)setAppBundleId:;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:;
- (id)appBundleId;
- (unsigned long long)action;
- (void)setAction:;
- (void).cxx_destruct;
@end
