@interface DNDModeAssertionInvalidationDetails : NSObject
@property (nonatomic) NSString identifier;
- (id)_initWithIdentifier:;
- (id)init;
- (id)_initWithDetails:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
