@interface AWEFeedInteractionPreloadController : AWEBaseController
@property (nonatomic) AWEFeedCellManager cellManager;
@property (nonatomic) BOOL isColdFirstCell;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (id)feedPageContext;
- (id)preloadManager;
- (void)viewDidLoadBeforeTableviewSetup;
- (void)viewDidLoadAfterTableviewSetup;
- (void)willConfigureCell:withModel:atIndexPath:;
- (id)cellManager;
- (void)setCellManager:;
- (void)setIsColdFirstCell:;
- (void)cancelInteractionPreload;
- (void)preloadInteraction;
- (BOOL)isColdFirstCell;
- (void)configDequeExpectedIndexWithModel:andDirection:;
- (BOOL)ifPreloadWithModel:;
- (void)onFeedScrollDidEnd;
- (id)tableViewBounds;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (double)lastContentOffset;
- (void)setLastContentOffset:;
@end
