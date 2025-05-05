@interface IMDSpotlightIndexerTimingProfiler : NSObject
@property (nonatomic) IMTimingCollection timingCollection;
@property (nonatomic) double timeout;
@property (nonatomic) NSMutableSet runningTimers;
@property (nonatomic) NSMutableArray runTimers;
@property (nonatomic) NSArray abortedTimers;
- (void)setTimeout:;
- (void)stopTimingForKey:;
- (void)startTimingForKey:;
- (void).cxx_destruct;
- (double)timeout;
- (id)timingCollection;
- (void)setTimingCollection:;
- (void)startMainTimerWithExpectedTimeoutInterval:;
- (void)startTimingForKey:iteration:;
- (void)stopTimingForKey:iteration:;
- (void)logResults:;
- (void)stopProfilingAfterIndexersBailed;
- (void)abortCurrentTimers;
- (void)stopMainTimerAndLogAfterFailure;
- (void)stopMainTimerAndLogAfterSuccess;
- (id)runningTimers;
- (void)setRunningTimers:;
- (id)runTimers;
- (void)setRunTimers:;
- (id)abortedTimers;
- (void)setAbortedTimers:;
@end
