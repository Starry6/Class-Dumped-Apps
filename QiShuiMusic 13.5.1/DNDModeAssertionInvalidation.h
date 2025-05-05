@interface DNDModeAssertionInvalidation : NSObject
@property (nonatomic) DNDModeAssertionSource source;
@property (nonatomic) DNDModeAssertionInvalidationDetails details;
@property (nonatomic) Q reasonOverride;
@property (nonatomic) DNDModeAssertion assertion;
@property (nonatomic) NSDate invalidationDate;
@property (nonatomic) Q reason;
- (id)assertion;
- (unsigned long long)reason;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (id)details;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAssertion:invalidationDate:details:source:reason:reasonOverride:;
- (id)invalidationDate;
- (unsigned long long)reasonOverride;
+ (BOOL)supportsSecureCoding;
@end
