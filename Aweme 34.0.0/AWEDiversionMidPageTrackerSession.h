@interface AWEDiversionMidPageTrackerSession : NSObject
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q startTime;
@property (nonatomic) BOOL suspended;
@property (nonatomic) UIViewController assignedPage;
@property (nonatomic) @? tracker;
- (id)trackParams;
- (void)setTrackParams:;
- (void)trackWithType:endTime:;
- (id)assignedPage;
- (void)setAssignedPage:;
- (BOOL)suspended;
- (id)initWithParams:;
- (void)setSuspended:;
- (void)setStartTime:;
- (void)resume;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)suspend;
- (unsigned long long)startTime;
@end
