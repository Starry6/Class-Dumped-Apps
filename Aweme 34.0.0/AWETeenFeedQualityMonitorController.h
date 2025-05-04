@interface AWETeenFeedQualityMonitorController : AWETeenFeedBaseController
@property (nonatomic) NSString subScene;
- (id)subScene;
- (void)setSubScene:;
- (void)beginRequestDataFromRefresh:;
- (void)endRequestDataSuccess:error:fromRefresh:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear;
@end
