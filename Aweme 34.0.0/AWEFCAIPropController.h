@interface AWEFCAIPropController : AWEBaseController
- (BOOL)isActiveForBackup;
- (void)showAIPropTaskNotificationIfNeeded;
- (void)bizDowngradeDelayRecoveryVideoBackupIfNeed;
- (void)viewDidAppear;
@end
