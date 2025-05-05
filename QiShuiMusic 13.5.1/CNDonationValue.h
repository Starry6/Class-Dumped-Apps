@interface CNDonationValue : NSObject
@property (nonatomic) CNDonationOrigin origin;
- (id)copyWithNewExpirationDate:;
- (void)acceptDonationValueVisitor:;
- (id)propertyListRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)origin;
- (void)encodeWithCoder:;
- (id)initWithOrigin:;
- (id)initWithPropertyListRepresentation:;
- (void).cxx_destruct;
- (void)updatePropertyListRepresentation:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)donationValueWithPostalAddress:style:label:origin:;
+ (id)donationValueWithNameComponents:origin:;
+ (id)donationValueWithEmailAddress:label:origin:;
+ (id)donationValueWithPhoneNumber:label:origin:;
+ (id)donationValueWithImageData:origin:;
@end
