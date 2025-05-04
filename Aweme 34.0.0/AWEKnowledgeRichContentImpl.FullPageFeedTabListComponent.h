@interface AWEKnowledgeRichContentImpl.FullPageFeedTabListComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent
- (void)onContainerViewDidAppear;
- (void)onContainerViewDidDisappear;
- (BOOL)shouldShowNoMoreButton;
- (void)tabListContainerScrollViewDidScroll:;
- (void)tabListDidTapItemAtIndex:locationType:;
- (id)init;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
@end
