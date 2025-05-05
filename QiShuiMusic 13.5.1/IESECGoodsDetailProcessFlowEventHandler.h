@interface IESECGoodsDetailProcessFlowEventHandler : IESECGoodsDetailEventHandler
- (void)clickAuctionProcessFlowTitleWithURL:;
- (void)clickGroupbuyProcessFlowTitleWithURL:;
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
+ (id)eventComponentID;
@end
