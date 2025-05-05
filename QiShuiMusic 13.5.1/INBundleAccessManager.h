@interface INBundleAccessManager : NSObject
@property (nonatomic) NSMutableDictionary securityScopedURLs;
@property (nonatomic) NSMutableSet accessibleBundleIDs;
- (id)init;
- (void).cxx_destruct;
- (id)grantForBundleIdentifier:error:;
- (id)grantForBundleIdentifiers:error:;
- (id)_grantForBundleIdentifiers:error:;
- (id)_stats;
- (id)securityScopedURLs;
- (id)accessibleBundleIDs;
+ (id)sharedManager;
@end
