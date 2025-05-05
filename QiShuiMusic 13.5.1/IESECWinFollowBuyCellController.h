@interface IESECWinFollowBuyCellController : IESECWinFollowBuySectionController
@property (nonatomic) IESECWinFollowBuyObject object;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
- (void)configCell;
- (id)getCustomCellFrameWithSectionID:withEdgeInsets:;
- (double)heightForModel:itemWidth:bffItemData:;
- (void)setCellFrame:edgeInsets:withSectionID:;
- (void)setSplitService:;
- (id)splitService;
- (void)willDisplayWithSource:extraParams:;
- (void)setObject:;
- (void).cxx_destruct;
- (id)object;
+ (Class)cellModelClass;
+ (Class)cellClass;
@end
