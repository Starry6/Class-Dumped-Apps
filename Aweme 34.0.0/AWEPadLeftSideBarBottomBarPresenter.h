@interface AWEPadLeftSideBarBottomBarPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) AWELeftSideBarListCellDataModel cellDataModel;
@property (nonatomic) q themeStyle;
@property (nonatomic) UIView<AWELeftSideBarStencilViewProtocol> listView;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (void)setThemeStyle:;
- (void)setCellDataModel:;
- (id)cellDataModel;
- (id)leftSideBarListCellDataModel:;
- (id)listView;
- (void)setListView:;
- (void).cxx_destruct;
- (long long)themeStyle;
@end
