@interface CKApplicationPermissionGroup : NSObject
@property (nonatomic) NSArray containerIDs;
@property (nonatomic) NSArray applicationBundleIDs;
@property (nonatomic) Q enabledPermissions;
- (id)init;
- (id)initWithCoder:;
- (id)containerIDs;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setContainerIDs:;
- (id)applicationBundleIDs;
- (void)setApplicationBundleIDs:;
- (unsigned long long)enabledPermissions;
- (void)setEnabledPermissions:;
+ (BOOL)supportsSecureCoding;
@end
