@interface AWEProfileBaseHeaderSectionController : AWEBaseListSectionController
@property (nonatomic) AWEProfileBaseHeaderCell currentCell;
@property (nonatomic) @? heightForCustomSegmentedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didBindSectionViewModel;
- (void)updateSelectedIndex:;
- (id)segmentFrameWithIndex:;
- (void)setHeightForCustomSegmentedBlock:;
- (void)updateScrollProgress:;
- (void)reloadRightFixedAreaWithViewsArray:;
- (double)headerCellHeight;
- (id)heightForCustomSegmentedBlock;
- (id)separatorColor;
- (Class)cellClass;
- (void).cxx_destruct;
- (void)setCurrentCell:;
- (id)currentCell;
+ (BOOL)enableUserPageSplitScreen;
+ (void)setEnableUserPageSplitScreen:;
@end
