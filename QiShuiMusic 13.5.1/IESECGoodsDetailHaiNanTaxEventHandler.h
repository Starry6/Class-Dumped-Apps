@interface IESECGoodsDetailHaiNanTaxEventHandler : IESECGoodsDetailEventHandler
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)openHaiNanDeliveryDesc;
- (void)reloadHaiNanTaxSection;
+ (id)eventComponentID;
@end
