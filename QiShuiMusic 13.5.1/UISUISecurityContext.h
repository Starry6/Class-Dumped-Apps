@interface UISUISecurityContext : NSObject
@property (nonatomic) NSArray securityScopedResources;
@property (nonatomic) BOOL isActive;
- (id)initWithCoder:;
- (void)deactivate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isActive;
- (void)activate;
- (id)securityScopedResources;
- (id)initWithSecurityScopedResources:;
- (id)securityScopedResourcesMatchingPredicate:;
- (id)accessibleURLs;
+ (BOOL)supportsSecureCoding;
@end
