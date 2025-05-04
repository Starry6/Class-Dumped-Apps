@interface AWEIMVmojiCreateView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) BDImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton createButton;
@property (nonatomic) <AWEIMVmojiCreateViewDelegate> delegate;
- (void)p_setupUI;
- (id)delegate;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (id)createButton;
- (void)setCreateButton:;
- (void)createAvatar;
- (void)imageViewTapped:;
@end
