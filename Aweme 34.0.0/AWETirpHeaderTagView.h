@interface AWETirpHeaderTagView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UILabel tabTitleLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) BOOL selected;
@property (nonatomic) @? selectAction;
- (id)tabTitleLabel;
- (void)setSelectAction:;
- (void)onClickAction;
- (id)selectAction;
- (void)setTabTitleLabel:;
- (id)initWithFrame:;
- (void)setTitleText:;
- (void)updateLayout;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (id)gradientLayer;
- (id)bgView;
- (void)setBgView:;
- (void)setGradientLayer:;
- (void)setupUI;
@end
