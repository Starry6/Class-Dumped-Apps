@interface AWEIMListExpandingFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIView transparentBackgroundView;
@property (nonatomic) UILabel expandingTextLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView maskView;
@property (nonatomic) <AWEIMListExpandingFooterViewProtocol> delegate;
- (void)__didTapOnMaskView;
- (void)__setupUI;
- (void)configWithExpandingStatus:;
- (id)expandingTextLabel;
- (void)setExpandingTextLabel:;
- (void)setTransparentBackgroundView:;
- (id)transparentBackgroundView;
- (id)initWithReuseIdentifier:;
- (id)maskView;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setMaskView:;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)identifier;
@end
