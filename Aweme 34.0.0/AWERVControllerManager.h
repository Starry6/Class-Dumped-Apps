@interface AWERVControllerManager : AWEShellControllerManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishUnFollowUser:status:error:;
- (void)player:didChangePlaybackToAction:;
- (id)classNameArray;
- (BOOL)shouldPreventPause;
- (void)startInit;
- (void)refreshWithAwemeModel:;
- (void)willEnterFullScreenWithEnterMethod:;
- (void)slidingToRelatedVideoTap;
- (void)slidingToCommentTap;
- (void)didConfigPageContext;
- (void)afterViewDidLoad;
- (void)viewWillAppearAfterUpdateContentSize:;
- (void)setupPageBeforeSetupUI;
- (void)backButtonDidClicked:;
- (void)didSetupHalfPageUI;
- (void)setupUIBeforeAddContainerVC;
- (void)refreshWithUIAfterVideoPlayerFrameUpdate;
- (void)refreshWithUIAfterUpdateContentSize;
- (void)didRefreshWithUI;
- (void)willRefreshWithAwemeModel:;
- (BOOL)shouldUseCustomRefreshPlayerTime;
- (void)didRefreshWithAwemeModel:;
- (void)enterFullScreenWithEnterMethod:createPageContext:holder:;
- (BOOL)shouldDisableResumeVideoPlayer;
- (void)prepareToBack;
- (void)afterQuitFromLandscapeFeed;
- (void)player:willPlayNextVideo:isMixVideo:;
- (BOOL)shouldBlockBackAction:;
- (void)scrollViewWillDidScroll:;
- (void)updateVideoPlayerFrameWhenScrolling:;
- (void)scrollViewDidScrollAfter:;
- (void)didMoveToParentViewController:;
- (void)appWillResignActive:;
- (void)appDidBecomeActive:;
- (void)didInit;
@end
