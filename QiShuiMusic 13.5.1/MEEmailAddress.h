@interface MEEmailAddress : NSObject
@property (nonatomic) NSString rawString;
@property (nonatomic) NSString addressString;
@property (nonatomic) ECEmailAddress emailAddressValue;
@property (nonatomic) NSString stringValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rawString;
- (id)addressString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)emailAddressValue;
- (void)encodeWithCoder:;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRawString:;
+ (BOOL)supportsSecureCoding;
+ (id)emailAddressesForAddresses:;
@end
