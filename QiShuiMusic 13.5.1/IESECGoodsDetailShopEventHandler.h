@interface IESECGoodsDetailShopEventHandler : IESECGoodsDetailEventHandler
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)monitorEnterShopSuccessWithStart:;
- (void)tapShopPage;
+ (id)eventComponentID;
@end
