@interface IESECWinLiveTabProductCellController : IESECWinLivingProductSectionController
- (void)configCell;
- (double)heightForModel:itemWidth:bffItemData:;
- (void)willDisplayWithSource:extraParams:;
+ (Class)cellModelClass;
+ (Class)cellClass;
@end
