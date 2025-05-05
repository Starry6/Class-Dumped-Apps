@interface MFMailAccountProxyGenerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)defaultMailAccountProxyForDeliveryOriginatingBundleID:sourceAccountManagement:;
- (id)accountProxyContainingEmailAddress:includingInactive:;
- (id)accountProxyContainingEmailAddress:includingInactive:originatingBundleID:sourceAccountManagement:;
- (id)activeAccountProxiesOriginatingBundleID:sourceAccountManagement:;
- (id)allAccountProxies;
- (id)initWithAllowsRestrictedAccounts:;
@end
