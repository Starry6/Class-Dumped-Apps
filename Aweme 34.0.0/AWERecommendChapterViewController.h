@interface AWERecommendChapterViewController : UIViewController
@property (nonatomic) BDImageView topImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) DUXButton confirmButton;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) @? dismissBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (id)topImageView;
- (void)setTopImageView:;
- (void)handleClickConfirmButton;
- (void)setModel:;
- (void)viewDidLoad;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
