@interface IDSPhoneSubscription : NSObject
@property (nonatomic) q subscriptionSlot;
@property (nonatomic) NSString labelID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLabelID:;
- (id)description;
- (id)labelID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)matchingSim;
- (id)initWithSubscriptionSlot:labelID:;
- (BOOL)isEqualToPhoneSubscription:;
- (long long)subscriptionSlot;
- (void)setSubscriptionSlot:;
+ (BOOL)supportsSecureCoding;
+ (id)phoneSubscriptionWithSubscriptionSlot:andLabelID:;
+ (id)phoneSubscriptionWithSIM:;
+ (id)phoneSubscriptionWithLabelID:;
+ (id)phoneSubscriptionsFromCTSIMs:;
+ (id)phoneSubscriptionWithSubscriptionSlot:;
+ (id)CTSIMSFromPhoneSubscriptions:;
@end
