@interface AWEHotSearchCommentExtendDiscussionSectionController : AWECommonFeedBaseSectionController
@property (nonatomic) NSArray timerDisabledCellModels;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)innerViewModel;
- (id)timerDisabledCellModels;
- (void)setTimerDisabledCellModels:;
- (void).cxx_destruct;
- (Class)footerViewClass;
- (Class)headerViewClass;
@end
