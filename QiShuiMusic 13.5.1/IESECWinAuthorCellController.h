@interface IESECWinAuthorCellController : IESECWinAuthorSectionController
@property (nonatomic) IESECWinAuthorObject object;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
@property (nonatomic) IESECServiceProxy<IESECWinMainScrollService> scrollService;
- (void)configCell;
- (id)getCustomCellFrameWithSectionID:withEdgeInsets:;
- (double)heightForModel:itemWidth:bffItemData:;
- (id)scrollService;
- (void)setCellFrame:edgeInsets:withSectionID:;
- (void)setScrollService:;
- (void)setSplitService:;
- (id)splitService;
- (void)willDisplayWithSource:extraParams:;
- (void)setObject:;
- (void).cxx_destruct;
- (id)object;
+ (Class)cellModelClass;
+ (Class)cellClass;
@end
