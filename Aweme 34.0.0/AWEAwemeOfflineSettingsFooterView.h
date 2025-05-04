@interface AWEAwemeOfflineSettingsFooterView : UIView
@property (nonatomic) UIButton downloadAndUpdateButton;
@property (nonatomic) UIButton clearCacheButton;
@property (nonatomic) UIButton pauseAndContinueButton;
@property (nonatomic) <AWEAwemeOfflineSettingsFooterViewDelegate> delegate;
- (id)clearCacheButton;
- (id)pauseAndContinueButton;
- (id)downloadAndUpdateButton;
- (void)clickDownloadAndUpdateButton;
- (void)clickClearCacheButton;
- (void)clickPauseAndContinueButton;
- (void)updateButtonState:;
- (void)setDownloadAndUpdateButton:;
- (void)setClearCacheButton:;
- (void)setPauseAndContinueButton:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
