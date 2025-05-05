@interface VSIdentityProviderInfoQueryResult : NSObject
@property (nonatomic) VSIdentityProvider identityProvider;
@property (nonatomic) NSString designatedAppBundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)identityProvider;
- (void)setIdentityProvider:;
- (id)designatedAppBundleIdentifier;
- (void)setDesignatedAppBundleIdentifier:;
@end
