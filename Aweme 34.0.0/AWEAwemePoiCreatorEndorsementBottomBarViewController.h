@interface AWEAwemePoiCreatorEndorsementBottomBarViewController : UIViewController
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) UIView bottomBarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) DUXButton actionButtonView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)setBottomBarView:;
- (void)reloadWithAweme:;
- (void)actionBarDidTaped;
- (void)p_updateUIWithNewButtonInfo:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)bottomBarView;
- (id)actionButtonView;
- (void)setActionButtonView:;
@end
