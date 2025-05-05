@interface SFContactInfo : NSObject
@property (nonatomic) NSString contactIdentifier;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString phoneNumber;
- (id)emailAddress;
- (id)phoneNumber;
- (void)setContactIdentifier:;
- (id)contactIdentifier;
- (void)setEmailAddress:;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
