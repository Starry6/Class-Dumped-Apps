@interface CNUICoreApplicationAuthorizationItem : NSObject
@property (nonatomic) CNUICoreApplicationAuthorizationItem snapshot;
@property (nonatomic) NSData icon;
@property (nonatomic) NSString name;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) q deviceType;
@property (nonatomic) q authorization;
@property (nonatomic) BOOL hasChanges;
- (long long)deviceType;
- (BOOL)hasChanges;
- (long long)authorization;
- (id)init;
- (id)bundleIdentifier;
- (id)icon;
- (void)setAuthorization:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)snapshot;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIcon:name:bundleIdentifier:deviceType:authorization:;
- (id)initWithIcon:name:bundleIdentifier:deviceType:authorization:shouldTakeSnapshot:;
- (id)itemBySettingIcon:;
+ (BOOL)supportsSecureCoding;
@end
