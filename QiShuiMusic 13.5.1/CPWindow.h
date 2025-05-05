@interface CPWindow : UIWindow
@property (nonatomic) NSLayoutConstraint topConstraint;
@property (nonatomic) NSLayoutConstraint bottomConstraint;
@property (nonatomic) NSLayoutConstraint leftConstraint;
@property (nonatomic) NSLayoutConstraint rightConstraint;
@property (nonatomic) UILayoutGuide mapButtonSafeAreaLayoutGuide;
@property (nonatomic) UIWindowScene windowScene;
@property (nonatomic) CPTemplateApplicationScene templateApplicationScene;
- (void)setBottomConstraint:;
- (id)bottomConstraint;
- (void)setLeftConstraint:;
- (void)setTopConstraint:;
- (id)topConstraint;
- (id)leftConstraint;
- (void).cxx_destruct;
- (id)rightConstraint;
- (void)setRightConstraint:;
- (id)initWithFrame:templateScene:;
- (void)updateLayoutGuideWithInsets:;
- (id)templateApplicationScene;
- (void)setTemplateApplicationScene:;
- (id)mapButtonSafeAreaLayoutGuide;
@end
