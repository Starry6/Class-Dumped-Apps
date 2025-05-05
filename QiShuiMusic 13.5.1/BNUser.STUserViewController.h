@interface BNUser.STUserViewController : _TtGC15BNCommonAdapter21BNFrameViewControllerC6BNUser15STUserFrameView_
@property (nonatomic) NSString etPageName;
@property (nonatomic) NSString etSceneName;
@property (nonatomic) _TtC15BNSceneContract14STProfileParam param;
@property (nonatomic) _TtC15BNCommonAdapter10BNUserInfo currentInfo;
- (id)etPageName;
- (id)etSceneName;
- (void)scrollViewDidEndDecelerating:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)followButtonTapped;
- (void)setCurrentInfo:;
- (void)didTakeScreenshot;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (id)currentInfo;
@end
