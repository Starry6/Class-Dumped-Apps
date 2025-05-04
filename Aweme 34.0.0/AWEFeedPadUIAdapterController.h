@interface AWEFeedPadUIAdapterController : AWEBaseController
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastFrame;
- (id)aAWEPadModuleAdapter;
- (void)configureCell:withModel:atIndexPath:;
- (void)viewDidLoadAfterTableviewSetup;
- (void)padScrollToCellNotification:;
- (void)handleReplaceVideosWhenViewWillTransitionToSize:withTransitionCoordinator:;
- (void)performPadViewTransitionToSize:withTransitionCoordinator:;
- (double)cellHeightForPadWithTransitionToSize:;
- (id)replaceVideoConfig;
- (void)replaceVideosIfNeeded;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)viewDidAppear:;
- (id)lastFrame;
- (void)setLastFrame:;
+ (Class)aAWEPadModuleAdapterClass;
@end
