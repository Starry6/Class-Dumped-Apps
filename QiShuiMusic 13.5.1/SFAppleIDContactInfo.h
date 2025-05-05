@interface SFAppleIDContactInfo : NSObject
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSArray validatedEmailAddresses;
@property (nonatomic) NSArray validatedPhoneNumbers;
- (void)setLastName:;
- (void)setValidatedEmailAddresses:;
- (void)setValidatedPhoneNumbers:;
- (void)setFirstName:;
- (id)initWithDictionary:;
- (id)firstName;
- (id)lastName;
- (id)validatedEmailAddresses;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqualToContactInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)validatedPhoneNumbers;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
