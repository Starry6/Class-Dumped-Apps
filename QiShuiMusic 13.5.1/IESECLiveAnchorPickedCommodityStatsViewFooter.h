@interface IESECLiveAnchorPickedCommodityStatsViewFooter : UITableViewHeaderFooterView
@property (nonatomic) q status;
@property (nonatomic) UIView statusView;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UIImageView loadingImage;
@property (nonatomic) <IESECLiveAnchorPickedCommodityStatsViewFooterDelegate> delegate;
- (void)setLoadingImage:;
- (id)initWithReuseIdentifier:;
- (void)setStatus:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)status;
- (void)setupUI;
- (void)handleTapGesture;
- (id)statusLabel;
- (void)setStatusLabel:;
- (id)statusView;
- (void)setStatusView:;
- (id)loadingImage;
+ (id)identity;
+ (double)footerHeight;
@end
