@interface CNMeContactsPredicate : CNPredicate
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)contactsFromDonationStore:;
+ (BOOL)supportsSecureCoding;
@end
