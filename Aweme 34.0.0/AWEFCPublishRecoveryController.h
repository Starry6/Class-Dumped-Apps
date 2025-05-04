@interface AWEFCPublishRecoveryController : AWEBaseController
@property (nonatomic) BOOL hasShowVideoRecoveryAlert;
- (void)task:willAppendWithInfo:;
- (void)splashViewDidDisappear:;
- (void)awesomeSplashRemoved:;
- (void)recoveryVideoBackupIfNeed;
- (BOOL)isActiveForBackup;
- (void)showRetryViewWhenLaunch;
- (BOOL)hasShowVideoRecoveryAlert;
- (void)setHasShowVideoRecoveryAlert:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear;
@end
