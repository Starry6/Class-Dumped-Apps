@interface ASDLaunchableAppsRequestOptions : ASDRequestOptions
@property (nonatomic) NSArray bundleIDs;
- (id)bundleIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithBundleIDs:;
+ (BOOL)supportsSecureCoding;
@end
