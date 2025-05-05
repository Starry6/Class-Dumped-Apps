@interface IESECGoodsDetailAuctionBidEventHandler : IESECGoodsDetailEventHandler
- (void)clickAuctionBidWithAuctionID:extraParams:;
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
+ (id)eventComponentID;
@end
