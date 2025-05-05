@interface CNMutableDonationOrigin : CNDonationOrigin
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString donationIdentifier;
@property (nonatomic) NSString clusterIdentifier;
@property (nonatomic) NSDate donationDate;
@property (nonatomic) NSDate expirationDate;
- (id)init;
- (void)setDonationIdentifier:;
- (void)setExpirationDate:;
- (void)setBundleIdentifier:;
- (void)setClusterIdentifier:;
- (void)setDonationDate:;
- (id)copyWithZone:;
+ (id)new;
@end
