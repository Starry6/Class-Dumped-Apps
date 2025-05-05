@interface IESECWinTabContainerCellController : IESECWinTabContainerSectionController
@property (nonatomic) IESECWinTabContainerObject object;
@property (nonatomic) IESECServiceProxy<IESECWinFeedMapperService> mapper;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
- (void)configCell;
- (id)getCustomCellFrameWithSectionID:withEdgeInsets:;
- (double)heightForModel:itemWidth:bffItemData:;
- (void)setCellFrame:edgeInsets:withSectionID:;
- (void)setSplitService:;
- (id)splitService;
- (void)willDisplayWithSource:extraParams:;
- (void)setObject:;
- (id)mapper;
- (void).cxx_destruct;
- (id)object;
- (void)setMapper:;
+ (Class)cellClass;
@end
