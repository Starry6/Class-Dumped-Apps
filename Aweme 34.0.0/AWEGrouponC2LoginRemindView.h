@interface AWEGrouponC2LoginRemindView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLable;
@property (nonatomic) UILabel tipsLable;
@property (nonatomic) UIButton loginBtn;
@property (nonatomic) @? clickHandler;
- (id)titleLable;
- (void)setTitleLable:;
- (id)clickHandler;
- (void)setClickHandler:;
- (void)updateTipsWithPageType:;
- (id)tipsLable;
- (id)loginBtn;
- (void)onLoginBtnClicked;
- (void)setTipsLable:;
- (void)setLoginBtn:;
- (id)init;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
@end
