@interface ICLightweightMusicSubscriptionStatus : NSObject
@property (nonatomic) Q capabilities;
@property (nonatomic) q statusType;
@property (nonatomic) q reasonType;
@property (nonatomic) NSArray eligibleOffers;
@property (nonatomic) NSDate expirationDate;
- (unsigned long long)capabilities;
- (long long)reasonType;
- (long long)statusType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (BOOL)hasCapability:;
- (void).cxx_destruct;
- (id)eligibleOffers;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithExtendedSubscriptionStatus:;
+ (BOOL)supportsSecureCoding;
@end
