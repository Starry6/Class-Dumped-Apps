@interface AWEGCPPlayValidWidget : IESGCPBaseWidget
@property (nonatomic) NSTimer playValidTimer;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hasReportPlayValid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerObserver;
- (void)currentPlayVideoDidChangePlayState:videoContainer:;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (BOOL)hasReportPlayValid;
- (void)reportPlayValid;
- (void)setPlayValidTimer:;
- (id)playValidTimer;
- (void)setHasReportPlayValid:;
- (double)totalTime;
- (void)startTimer;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)setTotalTime:;
+ (BOOL)widgetShouldBeActivated;
@end
