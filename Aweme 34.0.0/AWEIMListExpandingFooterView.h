@interface AWEIMListExpandingFooterView : UITableViewHeaderFooterView
@property (nonatomic) UIView transparentBackgroundView;
@property (nonatomic) UILabel expandingTextLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) <AWEIMListExpandingFooterViewProtocol> delegate;
- (void)__setupUI;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (void)configWithExpandingStatus:;
- (void)__didTapOnMaskView;
- (id)expandingTextLabel;
- (id)transparentBackgroundView;
- (void)setTransparentBackgroundView:;
- (void)setExpandingTextLabel:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)identifier;
@end
