@interface AWEChallengeDetailBodySectionController : AWEBaseListSectionController
@property (nonatomic) double sectionHeight;
@property (nonatomic) NSArray cellControllers;
@property (nonatomic) NSArray cellControllerHeight;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)reloadAnimated:completion:;
- (void)handleCellHeightChange:;
- (id)cellControllerHeight;
- (void)setCellControllerHeight:;
- (id)cellControllers;
- (void)setCellControllers:;
- (void)updateContentAlpha:;
- (id)init;
- (void)dealloc;
- (id)sectionBackgroundColor;
- (BOOL)showSeparator;
- (void).cxx_destruct;
- (double)sectionHeight;
- (void)setSectionHeight:;
@end
