@interface AWEKnowledgeRichContentImpl.FullPageFeedAnchorItemController : AWEKnowledgeSwiftBasic.FullPageBaseItemController
- (void)configCellWithCell:viewModel:;
- (void)cellWillDisplayWithCell:viewModel:;
- (void)sectionControllerWillDisplay;
- (id)initWithViewModel:;
- (Class)cellClass;
@end
