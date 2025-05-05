@interface PPConnectionsCriteria : NSObject
@property (nonatomic) C locationField;
@property (nonatomic) NSString bundleIdentifier;
- (id)bundleIdentifier;
- (id)initWithLocationField:bundleIdentifier:;
- (id)initWithCoder:;
- (void)setLocationField:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)locationField;
+ (BOOL)supportsSecureCoding;
@end
