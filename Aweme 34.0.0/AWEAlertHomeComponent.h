@interface AWEAlertHomeComponent : AWEUserHomeBaseComponent
@property (nonatomic) BOOL isFirstTimeViewDidAppear;
@property (nonatomic) BOOL isUserBannedAlertShowing;
- (void)p_showUserBannedAlert:;
- (BOOL)isFirstTimeViewDidAppear;
- (void)addAlertsForShowEvent;
- (void)setIsFirstTimeViewDidAppear:;
- (BOOL)isUserBannedAlertShowing;
- (void)setIsUserBannedAlertShowing:;
- (void)onEnterHomePageTab;
- (void)onReloadUI:isCache:;
- (void)viewDidAppear;
- (void)onInit;
@end
