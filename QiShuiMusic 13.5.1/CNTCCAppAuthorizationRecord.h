@interface CNTCCAppAuthorizationRecord : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString localizedName;
@property (nonatomic) q recordType;
@property (nonatomic) q authorizationStatus;
- (void)setAuthorizationStatus:;
- (id)bundleIdentifier;
- (long long)authorizationStatus;
- (id)localizedName;
- (long long)recordType;
- (void).cxx_destruct;
- (id)initWithTCCAuthorizationRecord:;
- (id)initWithBundleIdentifier:localizedName:recordType:authorizationStatus:;
+ (long long)authorizationStatusFromAuthorizationRight:;
+ (unsigned long long)authorizationRightFromAuthorizationStatus:;
@end
