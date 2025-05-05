@interface VNFrameworkDescriptor : VNProcessingDescriptor
@property (nonatomic) NSBundle frameworkBundle;
@property (nonatomic) VNResourceVersion frameworkVersion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)frameworkBundle;
- (BOOL)isEqual:;
- (id)initWithFrameworkBundleIdentifier:;
- (id)frameworkVersion;
+ (BOOL)supportsSecureCoding;
@end
