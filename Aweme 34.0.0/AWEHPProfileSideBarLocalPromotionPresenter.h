@interface AWEHPProfileSideBarLocalPromotionPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWEHPSideBarStencilViewProtocol> containerView;
@property (nonatomic) AWEHPSideBarStencilViewDataModel dataModel;
@property (nonatomic) BOOL hasTrackShowEvent;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewDidDisAppear;
- (id)p_sideBarListCellDataModel:;
- (void)p_trackShowEventIfNeed;
- (BOOL)hasTrackShowEvent;
- (void)setHasTrackShowEvent:;
- (void)p_handleClick;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
