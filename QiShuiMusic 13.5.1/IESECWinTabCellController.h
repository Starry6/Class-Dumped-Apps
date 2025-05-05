@interface IESECWinTabCellController : IESECWinTabSectionController
@property (nonatomic) IESECWinTabObject object;
@property (nonatomic) IESECServiceProxy<IESECWinTabService> tabService;
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
@property (nonatomic) IESECServiceProxy<IESECWinFeedMapperService> mapper;
- (void)setDataService:;
- (void)configCell;
- (id)dataService;
- (id)getCustomCellFrameWithSectionID:withEdgeInsets:;
- (double)heightForModel:itemWidth:bffItemData:;
- (void)setCellFrame:edgeInsets:withSectionID:;
- (void)setSplitService:;
- (void)setTabService:;
- (id)splitService;
- (id)tabService;
- (void)willDisplayWithSource:extraParams:;
- (void)setObject:;
- (id)mapper;
- (void).cxx_destruct;
- (id)object;
- (void)setMapper:;
+ (Class)cellClass;
@end
