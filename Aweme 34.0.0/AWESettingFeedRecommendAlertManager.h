@interface AWESettingFeedRecommendAlertManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onPersonalRecommendChanged:;
- (id)init;
- (void)setupNotifications;
+ (id)sharedManager;
@end
