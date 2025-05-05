@interface IESECLiveGoodsListLowPriceService : IESECLiveGoodsListBaseService
- (void)fetchLowPriceProductInfos:productIDs:promotionIDs:;
- (BOOL)handleLowPriceGuideShowWithItem:;
- (BOOL)handleLowPriceMessageIfNeedWithItem:;
- (id)handleLowPriceModuleWithMessage:;
- (void)handlePageApiResponse:;
- (BOOL)lowPriceHasShowWithProductID:;
- (void)start;
- (void)stop;
@end
