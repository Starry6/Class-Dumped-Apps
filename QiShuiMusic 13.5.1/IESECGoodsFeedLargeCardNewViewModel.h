@interface IESECGoodsFeedLargeCardNewViewModel : IESECGoodsFeedCellBaseViewModel
@property (nonatomic) IESECGoodsDetailParameters parameters;
- (void)productCardViewModelWithParams:;
- (id)calculateCellSizeForContaineSize:;
- (id)commonTrackParams;
- (id)compareDealsBarCommonParams;
- (id)compareDealsProductId;
- (id)initWithModel:context:useToInsert:;
- (BOOL)isEqualToProductId:;
- (void)largeCardViewModelWithParams:isFirstCard:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (id)multiGroupBuyingState;
- (id)nGroupBuyType:;
- (void)recommendLargeCardViewModelWithModel:;
@end
