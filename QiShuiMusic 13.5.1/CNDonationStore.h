@interface CNDonationStore : NSObject
@property (nonatomic) <CNDonationAgentAdapter> adapter;
- (id)init;
- (id)changeFromAccount:toAccount:;
- (void)donateMeCardValues:completionHandler:;
- (id)initWithAdapter:;
- (id)donatedMeCard;
- (id)donatedMeCardEither;
- (void)removeAllRejectionsWithCompletionHandler:;
- (id)meCardDonations;
- (void)rejectValuesWithClusterIdentifier:completionHandler:;
- (id)adapter;
- (void).cxx_destruct;
- (void)rejectValueWithDonationIdentifier:completionHandler:;
- (void)removeDonatedMeCardValuesForIdentifiers:completionHandler:;
- (void)fetchDonatedMeCard:;
@end
