@interface AWECommentPanelListSwiftImpl.CommentTopTipsSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidClickCloseButton:;
- (void)didBindSectionViewModel;
- (long long)waterfallColumnCount;
- (id)init;
@end
