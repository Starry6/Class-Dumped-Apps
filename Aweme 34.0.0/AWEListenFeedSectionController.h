@interface AWEListenFeedSectionController : AWEBaseListSectionController
@property (nonatomic) BOOL firstCellDismissed;
@property (nonatomic) AWEListenFeedContext context;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)setFirstCellDismissed:;
- (BOOL)firstCellDismissed;
- (void)uploadSccondPageProgressIfNeedWithModel:;
- (id)init;
- (id)sectionBackgroundColor;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
