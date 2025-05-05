@interface PSSoftwareUpdateTableView : UITableView
@property (nonatomic) UIActivityIndicatorView checkingForUpdateSpinner;
@property (nonatomic) UILabel checkingStatusLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) NSInteger state;
@property (nonatomic) NSString currentVersion;
@property (nonatomic) BOOL updatesDeferred;
- (void)layoutSubviews;
- (void)setState:;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (id)currentVersion;
- (id)initWithFrame:style:;
- (int)state;
- (void).cxx_destruct;
- (void)preferredContentSizeChanged:;
- (void)setCurrentVersion:;
- (BOOL)updatesDeferred;
- (void)setUpdatesDeferred:;
- (id)checkingStatusLabel;
- (void)setCheckingStatusLabel:;
- (id)checkingForUpdateSpinner;
- (void)setCheckingForUpdateSpinner:;
@end
