@interface AWEKnowledgeSwiftBasic.FullPageContainerScrollManager : AWEKnowledgeSwiftBasic.FullPageBaseComponent
- (void)onScrollViewWillBeginDraggingWithScrollView:;
- (void)onScrollViewDidScrollWithScrollView:;
- (void)onScrollViewDidEndDraggingWithScrollView:willDecelerate:;
- (void)onScrollViewDidEndDeceleratingWithScrollView:;
- (void)onScrollViewWillEndDraggingWithScrollView:withVelocity:targetContentOffset:;
- (void)onScrollViewDidEndScrollingAnimationWithScrollView:;
- (id)init;
@end
