@interface ASCLockupDisplayContext : NSObject
@property (nonatomic) NSString headingKind;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithHeadingKind:;
- (id)headingKind;
+ (BOOL)supportsSecureCoding;
@end
