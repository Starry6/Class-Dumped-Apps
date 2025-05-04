@interface AWEIMNewAwemeContentView : UIView
@property (nonatomic) AWEIMNewAwemeContentProps props;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UIImageView awemePlayIconImageView;
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) UIImageView awemeCoverImageView;
- (void)updateWithProps:;
- (void)tapOnCell:;
- (id)awemeCoverImageView;
- (id)awemePlayIconImageView;
- (void)setAwemePlayIconImageView:;
- (void)setAwemeCoverImageView:;
- (void)setLoadingView:;
- (id)props;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (void)setProps:;
@end
