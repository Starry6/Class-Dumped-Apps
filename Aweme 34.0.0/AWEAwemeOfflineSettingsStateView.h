@interface AWEAwemeOfflineSettingsStateView : UIView
@property (nonatomic) AWEAwemeOfflineSettingsLoadingView loadingView;
@property (nonatomic) UILabel progressLabel;
- (double)getProgress;
- (void)updateProgress:inDuration:;
- (void)updateProgressWithProgress:;
- (void)updateLabelWith:;
- (void)setLoadingView:;
- (void)resetProgress;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setupUI;
- (id)progressLabel;
- (void)setProgressLabel:;
@end
