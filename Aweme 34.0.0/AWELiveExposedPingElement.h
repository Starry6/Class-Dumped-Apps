@interface AWELiveExposedPingElement : AWELiveBaseElement
@property (nonatomic) NSDate enterDate;
@property (nonatomic) IESLiveGCDTimer timer;
@property (nonatomic) BOOL hadUploadTime;
- (void)viewController_viewDidDisAppear;
- (void)setEnterDate:;
- (id)enterDate;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_stop;
- (void)reportPreStreamExpose;
- (void)startReportPreStreamBrowseTime;
- (void)endReportPreStreamBrowseTime;
- (void)setHadUploadTime:;
- (void)reportPerStreamBrowseTimeWithType:;
- (BOOL)hadUploadTime;
- (void)setTimer:;
- (id)timer;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)reset;
@end
