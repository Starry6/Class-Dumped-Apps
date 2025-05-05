@interface IESLiveSaaSErrorPlaceholderView : UIView
@property (nonatomic) UIControl containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? retryAction;
@property (nonatomic) Q style;
- (void)containerTapAction:;
- (void)renderStyle:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (unsigned long long)style;
- (id)titleLabel;
- (id)retryAction;
- (void)setImageView:;
- (void)setupViews;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (void)setRetryAction:;
@end
