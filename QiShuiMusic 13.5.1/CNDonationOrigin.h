@interface CNDonationOrigin : NSObject
@property (nonatomic) NSDictionary propertyListRepresentation;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString donationIdentifier;
@property (nonatomic) NSString clusterIdentifier;
@property (nonatomic) NSDate donationDate;
@property (nonatomic) NSDate expirationDate;
- (id)bundleIdentifier;
- (id)propertyListRepresentation;
- (id)clusterIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:donationIdentifier:clusterIdentifier:donationDate:expirationDate:;
- (id)initWithBundleIdentifier:donationIdentifier:donationDate:expirationDate:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)donationDate;
- (id)initWithPropertyListRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)donationIdentifier;
- (id)initWithDonationOrigin:;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)originWithUpdatedDonationIdentifier:fromOrigin:;
@end
