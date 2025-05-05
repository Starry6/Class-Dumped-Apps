@interface WBUCreditCardDataController : WBSCreditCardDataController
- (unsigned long long)virtualCardFieldsToRequest;
- (BOOL)_shouldOfferVirtualCards;
- (BOOL)hasUsedNonVirtualCard;
- (void)setHasUsedNonVirtualCard;
+ (id)sharedCreditCardDataController;
@end
