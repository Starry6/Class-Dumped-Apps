@interface IESECLiveReplayTrace : NSObject
@property (nonatomic) IESECQualityInfoV2 fmpTracker;
@property (nonatomic) BOOL videoLoaded;
@property (nonatomic) BOOL viewRendered;
@property (nonatomic) BOOL didTraceReport;
- (void)setVideoLoaded:;
- (BOOL)didTraceReport;
- (id)fmpTracker;
- (id)initWithEnterFrom:;
- (void)setDidTraceReport:;
- (void)setFmpTracker:;
- (void)setViewRendered:;
- (void)traceAddExtra:;
- (void)traceEnd:;
- (void)traceInitialWithEnterFrom:;
- (void)traceLeaveBeforeRenderIfNeeded;
- (void)traceStart:;
- (BOOL)videoLoaded;
- (BOOL)viewRendered;
- (void).cxx_destruct;
@end
