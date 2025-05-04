@interface AWEPlayInteractionNewDiskSpaceInfoBarElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEAntiAddictedNoticeBarView diskSpaceInfoBarView;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay;
- (id)diskSpaceInfoBarView;
- (void)setDiskSpaceInfoBarView:;
- (void)updateDiskSpaceInfoBarView;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end
