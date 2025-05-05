@interface TTAdSplashViewButton : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView imageView;
@property (nonatomic) @? buttonTapActionBlock;
@property (nonatomic) NSString titleText;
- (id)buttonTapActionBlock;
- (void)setButtonTapActionBlock:;
- (void)setTitleText:;
- (id)titleText;
- (void)handleTapAction:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
@end
