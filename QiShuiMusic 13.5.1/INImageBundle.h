@interface INImageBundle : NSObject
@property (nonatomic) NSString bundlePath;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q bundleType;
- (id)bundlePath;
- (id)init;
- (id)bundleIdentifier;
- (void)setBundlePath:;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (unsigned long long)bundleType;
- (void)setBundleType:;
+ (BOOL)supportsSecureCoding;
@end
