@interface AWEMultiAccountComponent : AWEUserHomeBaseComponent
@property (nonatomic) BOOL hasClickedMultiAccountNoticeUnreadDotView;
@property (nonatomic) BOOL isHomePageAppear;
@property (nonatomic) BOOL needRetryWhenAppear;
- (BOOL)onConfigWithRouterParamDict:;
- (void)setIsHomePageAppear:;
- (BOOL)needRetryWhenAppear;
- (void)setNeedRetryWhenAppear:;
- (void)handleClickedMultiAccountNoticesHasClickedUnreadDotViewAction;
- (BOOL)isCurrentAppidForbidden;
- (BOOL)isHomePageAppear;
- (void)setHasClickedMultiAccountNoticeUnreadDotView:;
- (BOOL)hasClickedMultiAccountNoticeUnreadDotView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)onInit;
@end
