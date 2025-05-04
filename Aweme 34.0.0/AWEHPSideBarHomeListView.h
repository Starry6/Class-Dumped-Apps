@interface AWEHPSideBarHomeListView : AWEHPSideBarListBaseView
@property (nonatomic) <AWELeftSideBarItemContext> context;
@property (nonatomic) AWELeftSideBarListCellDataModel dataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)leftSideBarThemeDidChange:;
- (void)updateLeftSideBarSubTitle:;
- (BOOL)leftSideBarSubTitleIsShow;
- (id)leftSideBarDisplayingSubtitle;
- (BOOL)leftSideBarRedDotIsShow;
- (void)reloadStencilViewUI;
- (void)updateLeftSideBarUnreadCount:;
- (void)updateLeftSideBarUnreadCount:withMaxCount:;
- (void)updateListCellContext:cellDataModel:;
- (void)showLeftSideBarRedDot;
- (long long)leftSideBarRedDotStyle;
- (void)hideLeftSideBarRedDot;
- (double)leftSideBarStencilViewHeight;
- (void)p_updateIconImageWithThemeStyle:;
- (id)initWithContext:cellDataModel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)dataModel;
- (void)setDataModel:;
@end
