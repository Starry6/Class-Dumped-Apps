@interface AWELearningImpl.LearningTabHeaderVideoSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (void)viewControllerDidAppear:;
- (void)viewControllerWillDisappear:isBeingDismissed:isMovingFromParentViewController:;
- (void)viewControllerDidDisappear:;
- (void)didSelectItemAtIndex:model:;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:isScrolled:;
- (void)modernTransitionDidCompleteWithOffset:;
- (BOOL)shouldUpdatePlayerWhenModelDifferent:;
- (long long)preferScaleMode;
- (id)init;
- (Class)cellClass;
+ (Class)sectionViewModelClass;
@end
