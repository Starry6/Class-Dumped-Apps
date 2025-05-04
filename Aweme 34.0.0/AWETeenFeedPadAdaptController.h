@interface AWETeenFeedPadAdaptController : AWETeenFeedBaseController
@property (nonatomic) BOOL isViewTransitionInProgress;
@property (nonatomic) {CGSize=dd} willTransitionToSize;
@property (nonatomic) NSMutableArray viewTransitionInvalidIndexPaths;
- (BOOL)isViewTransitionInProgress;
- (void)setIsViewTransitionInProgress:;
- (id)viewTransitionInvalidIndexPaths;
- (void)setViewTransitionInvalidIndexPaths:;
- (void)performPadViewTransitionToSize:withTransitionCoordinator:;
- (double)cellHeightForPadWithTransitionToSize:;
- (id)willTransitionToSize;
- (void)setWillTransitionToSize:;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void).cxx_destruct;
- (double)cellHeight;
@end
