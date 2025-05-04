@interface AWEAwemeIAAPreloadController : AWEAwemeNewDetailBaseController
@property (nonatomic) <AWEPaidIAAPayment> preloadedIAAPayment;
@property (nonatomic) BOOL isPreloadRequesting;
- (void)configureCell:withModel:atIndexPath:;
- (BOOL)getConfigPreloadEnable;
- (id)getBusinessExtraDataWithModel:;
- (void)setPreloadedIAAPayment:;
- (void)preloadIAAADForModel:;
- (BOOL)isPreloadRequesting;
- (id)preloadedIAAPayment;
- (void)setIsPreloadRequesting:;
- (void)traceWithEventName:awemeModel:parameters:;
- (void)preloadIAAPaidStreamForAwemeModel:context:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
