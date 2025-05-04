@interface AWEHomePageRemoteDefaultMuteController : AWEHomePageRemoteCommonController
@property (nonatomic) BOOL isConsumed;
- (void)setIsConsumed:;
- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)homePageRemotePanelDidDismissWithReason:;
- (BOOL)tryUpdateButtonStatus;
- (id)toastCenter;
- (id)button;
- (BOOL)isConsumed;
@end
