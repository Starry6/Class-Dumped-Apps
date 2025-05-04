@interface AWEFeedSyncMultiDeviceLoadingCell : UITableViewCell
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) Q theme;
@property (nonatomic) UILabel strLabel;
- (void)updateTheme:;
- (id)strLabel;
- (void)updateSearchAnimStatus:;
- (void)setStrLabel:;
- (unsigned long long)theme;
- (void)setTheme:;
- (void)dealloc;
- (void)startLoading;
- (void)setLoadingView:;
- (void)stopLoading;
- (id)loadingView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateUI;
+ (double)cellHeight;
@end
