@interface IESECGoodsDetailDetailTopInfoEventHandler : IESECGoodsDetailEventHandler
- (void)clickExpand:business:;
- (void)clickGuaranteeTagCardWithBusiness:;
- (void)clickPropertySKU;
- (void)handleEventWithEventID:trackParams:businessParams:completion:;
- (void)openAuthImageList:business:;
- (void)openLinkPage:business:;
+ (id)eventComponentID;
@end
