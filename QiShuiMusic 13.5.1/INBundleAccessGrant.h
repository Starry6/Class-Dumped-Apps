@interface INBundleAccessGrant : NSObject
@property (nonatomic) NSDictionary securityScopedURLs;
@property (nonatomic) NSSet bundleIdentifiers;
- (void)dealloc;
- (void)acquire;
- (void).cxx_destruct;
- (void)relinquish;
- (id)bundleIdentifiers;
- (id)securityScopedURLs;
- (id)initWithSecurityScopedURLs:;
@end
