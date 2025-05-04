@interface AWELeftSideBarWeatherPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) AWELeftSideBarWeatherView weatherView;
@property (nonatomic) NSDictionary extraData;
@property (nonatomic) AWELeftSideBarWeatherModel model;
@property (nonatomic) BOOL isFirstAppear;
- (id)initWithContext:extraData:;
- (void)leftSideBarPresenterOnReloadWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:;
- (void)leftSideBarViewDynamicModuleRequestDataComplete:isCacheData:;
- (void)leftSideBarViewWillAppear;
- (void)setIsFirstAppear:;
- (void)trackClickEvent;
- (id)weatherView;
- (void)setWeatherView:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)extraData;
- (void)setExtraData:;
- (BOOL)isFirstAppear;
@end
