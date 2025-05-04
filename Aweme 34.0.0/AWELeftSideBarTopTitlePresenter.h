@interface AWELeftSideBarTopTitlePresenter : AWELeftSideBarBasePresenter
@property (nonatomic) UIView<AWELeftSideBarTopTitleStencilViewProtocol> titleView;
@property (nonatomic) AWELeftSideBarTimeManager timeManager;
@property (nonatomic) NSDictionary extraData;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:;
- (id)getShowTitle:;
- (id)titleView;
- (void)setTitleView:;
- (id)timeManager;
- (void).cxx_destruct;
- (void)setTimeManager:;
- (id)extraData;
- (void)setExtraData:;
@end
