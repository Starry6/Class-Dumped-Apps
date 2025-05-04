@interface AWEHPProfileSideBarQrCodePresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWEHPSideBarStencilViewProtocol> containerView;
@property (nonatomic) AWEHPSideBarStencilViewDataModel dataModel;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (id)p_sideBarListCellDataModel:;
- (void)p_handleClick;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
