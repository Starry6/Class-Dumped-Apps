@interface CNDonationAgentXPCAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)changeFromAccount:toAccount:;
- (id)rejectValuesWithClusterIdentifier:;
- (id)removeAllRejections;
- (id)rejectValueWithDonationIdentifier:;
- (id)donatedMeCardEither;
- (id)removeDonatedMeCardValuesForIdentifiers:;
- (id)meCardDonations;
- (id)donateMeCardValues:;
- (id)fetchDonatedMeCard;
+ (void)meCardDonationsWithScope:;
+ (void)rejectValuesWithClusterIdentifier:scope:;
+ (void)donateMeCardValues:scope:;
+ (void)rejectValueWithDonationIdentifier:scope:;
+ (void)removeDonatedMeCardValuesForIdentifiers:scope:;
+ (void)changeFromAccount:toAccount:scope:;
+ (void)fetchDonatedMeCardWithScope:;
+ (void)removeAllRejectionsWithScope:;
+ (id)newXPCConnection;
@end
