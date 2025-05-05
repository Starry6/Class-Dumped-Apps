@interface IESECWinProductCellController : IESECWinGoodsSectionController
@property (nonatomic) IESECServiceProxy<IESECWinTabService> tabService;
@property (nonatomic) IESECServiceProxy<IESECWinFeedService> feedService;
- (void)setFeedService:;
- (void)configCell;
- (void)didEndDisplayWithSource:extraParams:;
- (id)feedService;
- (double)heightForModel:itemWidth:bffItemData:;
- (void)setTabService:;
- (id)tabService;
- (void)willDisplayWithSource:extraParams:;
- (void).cxx_destruct;
+ (Class)cellModelClass;
+ (Class)cellClass;
@end
