@interface AWEPlayInteractionSkipInfoRecordingController : AWEPlayInteractionBaseController
@property (nonatomic) BOOL shouldReportSkipInfo;
@property (nonatomic) BOOL hasLoop;
@property (nonatomic) NSMutableDictionary skipInfoDic;
- (void)setupEvent;
- (void)userInteractionWithType:;
- (void)userInteractionNotification:;
- (id)skipInfoDic;
- (void)cacheSkipInfoIfNeeded;
- (void)setHasLoop:;
- (BOOL)shouldReportSkipInfo;
- (void)didStartEnterProfile:;
- (BOOL)hasLoop;
- (id)sceneWhiteListForReport;
- (void)setShouldReportSkipInfo:;
- (void)setSkipInfoDic:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (void)didEndDisplaying;
@end
