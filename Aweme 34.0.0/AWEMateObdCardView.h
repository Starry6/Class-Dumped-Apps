@interface AWEMateObdCardView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) AWEMateMultiAvatarView avatarView;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel primaryTitle;
@property (nonatomic) UILabel subTitle;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)configWithModels:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void)setSubTitle:;
- (id)avatarView;
- (id)subTitle;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
- (void)setPrimaryTitle:;
- (void)setCloseButton:;
- (id)closeButton;
- (void)closeButtonTapped:;
- (id)primaryTitle;
@end
