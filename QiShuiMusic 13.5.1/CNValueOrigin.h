@interface CNValueOrigin : NSObject
@property (nonatomic) NSString localizedApplicationName;
@property (nonatomic) NSString donationIdentifier;
- (id)initWithDonationOrigin:;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)donationIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localizedApplicationName;
- (id)initWithLocalizedApplicationName:donationIdentifier:;
+ (id)localizedApplicationNameForBundleIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
