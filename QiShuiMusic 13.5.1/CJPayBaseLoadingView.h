@interface CJPayBaseLoadingView : UIView
@property (nonatomic) UIImageView loadingIconView;
@property (nonatomic) UILabel stateLabel;
@property (nonatomic) UIView loadingContainerView;
@property (nonatomic) NSString stateDescText;
- (id)loadingIconView;
- (id)loadingContainerView;
- (void)setLoadingContainerView:;
- (void)setLoadingIconView:;
- (void)setStateDescText:;
- (id)stateDescText;
- (void)startAnimating;
- (id)initWithFrame:;
- (void)stopAnimating;
- (void).cxx_destruct;
- (void)setupUI;
- (id)stateLabel;
- (void)setStateLabel:;
@end
