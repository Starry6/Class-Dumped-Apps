@interface AWELeftSideBarDraftBoxPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWELeftSideBarStencilViewProtocol> cellView;
@property (nonatomic) AWELeftSideBarListCellDataModel cellDataModel;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)setCellView:;
- (void)setCellDataModel:;
- (id)cellDataModel;
- (void)setupDraftBoxSubTitle;
- (void).cxx_destruct;
- (id)cellView;
@end
