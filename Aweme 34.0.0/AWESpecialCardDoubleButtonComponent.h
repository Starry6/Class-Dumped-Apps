@interface AWESpecialCardDoubleButtonComponent : UIView
@property (nonatomic) DUXButton leftButton;
@property (nonatomic) DUXButton rightButton;
@property (nonatomic) AWESpecialCardDoubleButtonComponentConfig componentConfig;
- (id)componentConfig;
- (void)setComponentConfig:;
- (id)getDefaultButton;
- (void)updateButton:withConfig:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)leftButton;
- (id)initWithFrame:;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setupUI;
@end
