@interface DMFFetchAppsResultObject : CATTaskResultObject
@property (nonatomic) NSDictionary appsByBundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAppsByBundleIdentifier:;
- (id)appsByBundleIdentifier;
+ (BOOL)supportsSecureCoding;
@end
