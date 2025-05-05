@interface ASDLaunchableAppsResponse : ASDRequestResponse
@property (nonatomic) NSArray bundleIDs;
@property (nonatomic) BOOL success;
- (id)bundleIDs;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithBundleIDs:;
+ (BOOL)supportsSecureCoding;
@end
