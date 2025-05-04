@interface AWESearchFeedEntranceViewController : AWEBaseController
- (void)resetSearchCountInAppLaunchSession;
- (void)viewDidLoad;
- (void)appDidEnterBackground;
- (void)setupNotification;
@end
