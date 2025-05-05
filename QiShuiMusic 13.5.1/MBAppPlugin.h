@interface MBAppPlugin : MBContainer
@property (nonatomic) NSString bundleDir;
@property (nonatomic) NSString ownerBundleID;
@property (nonatomic) NSDictionary entitlements;
@property (nonatomic) NSString entitlementsRelativePath;
@property (nonatomic) NSArray groups;
@property (nonatomic) NSArray allAppGroupContainers;
- (id)entitlements;
- (id)groups;
- (id)domain;
- (id)bundleDir;
- (id)entitlementsRelativePath;
- (id)ownerBundleID;
- (id)allAppGroupContainers;
+ (id)appPluginWithPropertyList:;
@end
