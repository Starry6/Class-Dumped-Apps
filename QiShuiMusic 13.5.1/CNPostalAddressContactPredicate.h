@interface CNPostalAddressContactPredicate : CNPredicate
@property (nonatomic) CNPostalAddress postalAddress;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPostalAddress:;
- (id)postalAddress;
+ (BOOL)supportsSecureCoding;
@end
