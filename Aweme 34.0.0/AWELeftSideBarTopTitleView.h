@interface AWELeftSideBarTopTitleView : UIView
@property (nonatomic) NSString titleString;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWELeftSideBarItemContext> context;
@property (nonatomic) AWELeftSideBarListCellDataModel cellDataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)leftSideBarThemeDidChange:;
- (void)updateLeftSideBarSubTitle:;
- (BOOL)leftSideBarSubTitleIsShow;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)updateListCellContext:cellDataModel:;
- (void)showLeftSideBarRedDot;
- (long long)leftSideBarRedDotStyle;
- (void)hideLeftSideBarRedDot;
- (double)leftSideBarStencilViewHeight;
- (void)updateTitleText:;
- (void)setCellDataModel:;
- (id)cellDataModel;
- (id)initWithContext:cellDateModel:;
- (void)setTitleLabel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)context;
- (void)setTitleString:;
- (id)titleString;
- (void)setupUI;
- (id)topTitleLabel;
@end
