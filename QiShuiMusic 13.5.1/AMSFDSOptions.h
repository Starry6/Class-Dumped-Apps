@interface AMSFDSOptions : NSObject
@property (nonatomic) Q action;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (unsigned long long)action;
- (id)initWithCoder:;
- (void)setAction:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
