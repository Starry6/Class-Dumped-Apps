@interface DNDModeAssertion : NSObject
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSDate startDate;
@property (nonatomic) DNDModeAssertionDetails details;
@property (nonatomic) DNDModeAssertionSource source;
- (id)startDate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (id)details;
- (id)UUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithUUID:startDate:details:source:;
+ (BOOL)supportsSecureCoding;
@end
