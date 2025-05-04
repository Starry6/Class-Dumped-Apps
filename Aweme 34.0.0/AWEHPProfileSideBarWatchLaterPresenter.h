@interface AWEHPProfileSideBarWatchLaterPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWEHPSideBarStencilViewProtocol> containerView;
@property (nonatomic) AWEHPSideBarStencilViewDataModel dataModel;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (id)p_sideBarListCellDataModel:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
