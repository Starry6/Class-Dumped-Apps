@interface AWESuperManLoadingViewController : UIViewController
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL isRotated;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)updateUIWithModel:;
- (void)closeBatManAction:;
- (void)rotateLoadingViewWithModel:;
- (id)iconImage;
- (id)init;
- (void)setIconImage:;
- (id)contentView;
- (void)setTitleLabel:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (BOOL)isRotated;
- (void)setNameLabel:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
- (id)logoImageView;
- (void)setLogoImageView:;
- (void)setIsRotated:;
@end
