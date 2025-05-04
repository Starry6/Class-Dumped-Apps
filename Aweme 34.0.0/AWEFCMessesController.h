@interface AWEFCMessesController : AWEBaseController
- (void)refreshFeed;
- (id)mainAppWindow;
- (void)viewControllerTransitionNotification:;
- (void)windowDidResignKeyNotification:;
- (void)windowDidBecomeKeyNotification:;
- (void)onAwemeDeleteNotification:;
- (void)didChangedLanguage;
- (void)didVideoStartPlay:;
- (id)aAWEHPNoticeRefreshFeedAdapter;
- (void)onAwemePostExitNotification:;
- (void)onAwemeMarkDislikeCanWithdrawNotification:;
- (void)onAwemeVideoPlayGuideViewTouched:;
- (void)didReceiveFeedTableViewControllerSyncPlayStateNotification:;
- (void)newAnchorCame:;
- (void)p_restoreFeedContainerPlayNotification:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)appWillResignActive:;
- (void)viewWillAppear;
- (void)appDidBecomeActive:;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
+ (Class)aAWEHPNoticeRefreshFeedAdapterClass;
@end
