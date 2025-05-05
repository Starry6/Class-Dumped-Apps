@interface IESECGoodsDetailHeadViewEventHandler : IESECGoodsDetailEventHandler
- (void)scrollToComment;
- (void)scrollToProduct;
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)scrollToDetail;
- (void)scrollToGYL;
- (void)tapImageV2;
- (void)trackClickTabScrollAction;
+ (id)eventComponentID;
@end
