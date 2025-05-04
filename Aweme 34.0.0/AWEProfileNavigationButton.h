@interface AWEProfileNavigationButton : UIButton
@property (nonatomic) UIImage icon;
@property (nonatomic) NSString text;
@property (nonatomic) DUXBadge dotBadge;
@property (nonatomic) DUXBadge numberBadge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dotBadge;
- (void)setDotBadge:;
- (void)setNumberBadge:;
- (void)refreshLayout;
- (BOOL)isRedDotShow;
- (void)refreshRedDotWithModel:;
- (long long)redDotCount;
- (id)initWithIcon:text:;
- (id)icon;
- (void)setText:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateText:;
- (id)numberBadge;
@end
