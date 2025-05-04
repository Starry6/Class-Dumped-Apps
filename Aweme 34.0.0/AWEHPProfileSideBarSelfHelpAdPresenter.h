@interface AWEHPProfileSideBarSelfHelpAdPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWEHPSideBarStencilViewProtocol> containerView;
@property (nonatomic) AWEHPSideBarStencilViewDataModel dataModel;
@property (nonatomic) BOOL hasTrackShow;
@property (nonatomic) BOOL hasOnCreateCellView;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (BOOL)needLoadPresenter;
- (void)trackShow;
- (id)p_sideBarListCellDataModel:;
- (void)setHasTrackShow:;
- (void)setHasOnCreateCellView:;
- (BOOL)hasTrackShow;
- (BOOL)hasOnCreateCellView;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
