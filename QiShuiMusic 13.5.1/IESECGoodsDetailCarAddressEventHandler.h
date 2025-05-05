@interface IESECGoodsDetailCarAddressEventHandler : IESECGoodsDetailEventHandler
- (void)showCarAddress:;
- (void)clickCarAddressWithURL:selectedShopID:extraParams:;
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
+ (id)eventComponentID;
@end
