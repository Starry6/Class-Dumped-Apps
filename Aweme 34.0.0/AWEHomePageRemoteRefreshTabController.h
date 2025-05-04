@interface AWEHomePageRemoteRefreshTabController : AWEHomePageRemoteCommonController
@property (nonatomic) BOOL isConsumed;
@property (nonatomic) BOOL isSingleCell;
- (void)setIsConsumed:;
- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)reloadControllerCellWithModuleCellCount:;
- (void)homePageRemotePanelDidDismissWithReason:;
- (BOOL)isConsumed;
- (BOOL)isSingleCell;
- (void)setIsSingleCell:;
@end
