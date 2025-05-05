@interface NWAppAdvice : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) q state;
@property (nonatomic) NSString reason;
- (id)bundleIdentifier;
- (void)setState:;
- (id)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setReason:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (long long)state;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
