@interface AWEAwemeInnerIPhoneAutoPlayController : AWEAwemeNewDetailBaseController
@property (nonatomic) AWEFeedIPhoneAutoPlayManager autoPlayManager;
@property (nonatomic) BOOL isBackground;
- (void)setAutoPlayManager:;
- (id)autoPlayManager;
- (BOOL)isSpecialCard:;
- (void)addNotificationIfNeeded;
- (id)realReferString;
- (void)handleVideoDidPlayFinshNotification:;
- (BOOL)blockAutoPlayInPureMode;
- (BOOL)checkIsUserInteracting;
- (BOOL)checkIsOtherPopupsShow;
- (id)getCurrentAweme;
- (BOOL)showAutoPlayScrollToNextIfNeeded;
- (int)getCommerceStandingTime;
- (BOOL)isAFDRichContentContainer;
- (long long)feedAutoPlayStyle;
- (void)showToastIfNeeded;
- (long long)feedAutoPlaySwitchStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)isBackground;
- (void)setIsBackground:;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
@end
