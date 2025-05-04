@interface AWELiveFormatSportInfoElement : AWELiveTopElement
@property (nonatomic) UIView infoContainer;
@property (nonatomic) UILabel infoText;
- (BOOL)shouldActivateElementWithData:;
- (void)setInfoContainer:;
- (void)viewController_viewWillTransitionToSize:withTransitionCoordinator:;
- (void)preloadElement;
- (double)p_topOffSet;
- (void)showScoreViewIfNeed;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)setInfoText:;
- (id)infoText;
- (id)infoContainer;
@end
