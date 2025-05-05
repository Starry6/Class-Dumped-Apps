@interface IESLiveVSGiftSectionGiftTabCell : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) BOOL hasSetLandscapeGradientLayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveVSGiftSectionItem> item;
- (id)createTabButtonWithPage:;
- (BOOL)hasSetLandscapeGradientLayer;
- (void)p_loadTabButtons;
- (void)p_selectButtonAtIndex:;
- (void)p_setLandscapeGradientViewWithSize:;
- (void)setHasSetLandscapeGradientLayer:;
- (id)item;
- (id)contentView;
- (void)setScrollView:;
- (void)updateWithItem:;
- (id)buttons;
- (id)scrollView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setButtons:;
- (void)setContentView:;
- (void)setupUI;
@end
