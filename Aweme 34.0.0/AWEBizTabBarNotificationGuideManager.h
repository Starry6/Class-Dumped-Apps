@interface AWEBizTabBarNotificationGuideManager : NSObject
@property (nonatomic) AWEUINotificationBarView notificationBarView;
- (BOOL)isPushGuideNotificationBarShowing;
- (void)hideNotificationBarViewWithHidden:;
- (void)p_showNotificationBarIfNeeded;
- (id)notificationBarView;
- (void)dismissNotificationBarViewIfNeed;
- (void)notificationBarViewEnterURL:;
- (void)showNotificationBarIfNeeded;
- (void)setNotificationBarView:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setupNotification;
+ (id)sharedManager;
@end
