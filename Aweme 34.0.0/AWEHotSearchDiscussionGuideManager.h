@interface AWEHotSearchDiscussionGuideManager : NSObject
@property (nonatomic) LOTAnimationView fullScreenGuideLottieView;
@property (nonatomic) LOTAnimationView hotGuideLottieView;
@property (nonatomic) NSTimer tickTimer;
@property (nonatomic) NSIndexPath indexPathGuideViewFollowed;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEHotSearchBarrageView delegate;
- (void)setHasShowedFullScreenGuideView;
- (id)fullScreenGuideLottieView;
- (void)hideFullScreenGuideViewAnimation:;
- (void)setGuideViewTimer;
- (void)resetGuideViewTimer;
- (void)setHasClickedGuideView;
- (void)startFullScreenGuideView;
- (id)indexPathGuideViewFollowed;
- (id)hotGuideLottieView;
- (void)onScrollViewDidScrollWithCellRectInView:;
- (void)setIndexPathGuideViewFollowed:;
- (BOOL)hasShowedGuideView;
- (void)startGuideAnimation;
- (BOOL)hasShownFullScreenGuideView;
- (void)showFullScreenGuideViewAnimation;
- (void)setFullScreenGuideLottieView:;
- (void)setHotGuideLottieView:;
- (void)setTickTimer:;
- (id)delegate;
- (void)setTableView:;
- (id)tableView;
- (id)tickTimer;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)onResume;
- (void)onPause;
@end
