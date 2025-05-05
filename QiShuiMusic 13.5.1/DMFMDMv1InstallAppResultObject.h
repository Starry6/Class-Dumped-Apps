@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q state;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleIdentifier:state:;
+ (BOOL)supportsSecureCoding;
@end
