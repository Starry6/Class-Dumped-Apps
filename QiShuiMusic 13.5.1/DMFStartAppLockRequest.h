@interface DMFStartAppLockRequest : DMFTaskRequest
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
