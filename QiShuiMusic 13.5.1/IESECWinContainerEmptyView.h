@interface IESECWinContainerEmptyView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton tapButton;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? tapBlock;
- (void)setTapBlock:;
- (void)setTapButton:;
- (id)tapBlock;
- (id)tapButton;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (void)setUpViews;
- (void)buttonTapped;
@end
