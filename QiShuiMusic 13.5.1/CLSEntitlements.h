@interface CLSEntitlements : NSObject
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) NSString applicationBundleIdentifier;
@property (nonatomic) NSString classKitEnvironment;
- (id)applicationBundleIdentifier;
- (id)entitlements;
- (id)init;
- (BOOL)isDashboardAPIEnabled;
- (BOOL)isInternal;
- (BOOL)isPublicClassKitAPIEnabled;
- (BOOL)isRegisterDashboardEnabled;
- (BOOL)isPrivateSearchAPIEnabled;
- (id)stringValueForEntitlement:error:;
- (BOOL)isSearchAPIEnabled;
- (id)classKitEnvironment;
- (BOOL)boolValueForEntitlement:error:;
- (void).cxx_destruct;
- (BOOL)isInDevelopmentEnvironment;
- (id)initWithEntitlements:;
- (BOOL)hasEntitlement:;
+ (id)entitlementsWithSecTask:overrides:error:;
+ (BOOL)isDashboardAppProcess;
+ (id)allowedEntitlements;
+ (id)entitlementsWithConnection:error:;
+ (id)entitlementsForCurrentTaskWithError:;
+ (BOOL)isPrivateSearchEnabledProcess;
+ (BOOL)isSearchEnabledProcess;
+ (BOOL)isInternalProcess;
@end
