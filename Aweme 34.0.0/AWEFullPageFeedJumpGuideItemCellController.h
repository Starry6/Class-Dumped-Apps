@interface AWEFullPageFeedJumpGuideItemCellController : AWEKnowledgeSwiftBasic.FullPageBaseItemController
- (void)executePageModeChangeAnimation:;
- (void)onPageModeDidChage:;
- (double)getDeltaHeightWhenPageModeChange:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (void)configCellWithCell:viewModel:;
- (void)cellWillDisplayWithCell:viewModel:;
- (id)initWithViewModel:;
- (Class)cellClass;
@end
