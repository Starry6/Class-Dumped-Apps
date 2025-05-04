@interface AWETextLoadingView : UIView
@property (nonatomic) UIImageView loadingLogo;
@property (nonatomic) UILabel label;
- (id)loadingLogo;
- (void)setLoadingLogo:;
- (void)stopAnimating;
- (void)setLabel:;
- (id)init;
- (id)label;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)setupUI;
@end
