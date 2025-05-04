@interface AWEAwemeDetailLongVideoController : AWEAwemeNewDetailBaseController
@property (nonatomic) NSString lynxDomainForPDA;
@property (nonatomic) NSString lynxContainerIDForPDA;
- (void)configWithRouterParamDict:;
- (void)cellViewControllerDidRenderFirstFrame:;
- (void)configureCell:withModel:atIndexPath:;
- (id)awemeModelWithIndexPath:;
- (void)onPaySuccessAndChangeModelNotification:;
- (void)onChangePlayVideoNotification:;
- (void)setLynxDomainForPDA:;
- (void)setLynxContainerIDForPDA:;
- (void)replaceVideo:withModel:originModel:;
- (id)currentLongVideoWatermarkView;
- (void)showLongVideoWatermarkWithNeedRelayout:;
- (void)updatePDAAwemeCacheWithPaidModel:;
- (id)lynxDomainForPDA;
- (id)lynxContainerIDForPDA;
- (long long)findModelIndexWithDataSource:awemeId:model:originModel:;
- (void)submitLongVideoHistory:progress:;
- (void)viewWillDisappear:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)orientationChanged;
@end
