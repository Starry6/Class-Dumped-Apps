@interface AWELeftSideBarWalletPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) AWELeftSideBarListCellDataModel cellDataModel;
@property (nonatomic) UIView<AWELeftSideBarStencilViewProtocol> listView;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (void)leftSideBarViewWillAppear;
- (id)p_enterFrom;
- (id)p_enterFromWithIdentification:;
- (void)setCellDataModel:;
- (id)cellDataModel;
- (id)listView;
- (void)setListView:;
- (void).cxx_destruct;
@end
