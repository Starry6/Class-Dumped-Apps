@interface IESECInfinitelyDefaultLoadingView : UIView
@property (nonatomic) q refreshType;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) UIView<IESECUILoadingViewProtocol> activityIndicatorView;
@property (nonatomic) NSString loadingText;
- (void)setRefreshType:;
- (id)initWithFrame:loadingType:;
- (long long)refreshType;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:;
- (id)loadingLabel;
- (void)setLoadingText:;
- (id)loadingText;
- (void)setLoadingLabel:;
@end
