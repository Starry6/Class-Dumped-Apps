@interface AWENaviDuetRToolBarView : AWENaviPassThroughView
@property (nonatomic) UIStackView contentView;
@property (nonatomic) NSMutableDictionary barItemDictionary;
- (void)p_setupUI;
- (void)viewContainerDidLoad;
- (id)barItemDictionary;
- (id)itemViewWithID:;
- (void)setBarItemDictionary:;
- (id)initWithFrame:;
- (id)contentView;
- (void)toggleVisibility:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)addItem:;
@end
