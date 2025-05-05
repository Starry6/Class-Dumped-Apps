@interface AMSURLParser : NSObject
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bagContract;
- (id)initWithBagContract:;
- (id)initWithBag:;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)isCommerceUIURL:;
- (id)typeForCommerceUIURL:;
- (id)typeForURL:;
- (id)_commerceUIArrayForKey:;
- (id)_defaultWebAllowedForURL:;
- (id)_dynamicUIAllowedForURL:;
- (id)_legacyWebAllowedForURL:;
- (BOOL)_matchURL:toPatterns:;
- (id)_correctURL:;
- (void)_waitForPromises:block:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end
