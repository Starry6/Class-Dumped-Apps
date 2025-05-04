@interface AWEAwemeFeedSafetyCheckVideoController : AWEAwemeFeedBaseController
@property (nonatomic) AWEFeedVideoSafetyCheckHandler safetyCheckHandler;
- (void)handleVideoSafetyPreCheckNotification:;
- (id)safetyCheckHandler;
- (void)setSafetyCheckHandler:;
- (void)handleVideoSafetyCheckNotification:;
- (void)handleVideoPrivacyCheckNotification:;
- (void)handleVideoSafetyPreCheckWithResults:error:isCurrentModel:;
- (BOOL)enableSafetyCheckOpt;
- (BOOL)enableSafetyCheckOptShowLoading;
- (void)showTopBarLoading;
- (void)trackShowDrawBackCellWithAweme:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
