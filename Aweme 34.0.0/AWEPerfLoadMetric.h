@interface AWEPerfLoadMetric : NSObject
@property (nonatomic) BOOL ttiEnabled;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double baseTime;
@property (nonatomic) AWEPerfLoadTrace trace;
@property (nonatomic) AWEPerfSession session;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBaseTime:;
- (double)baseTime;
- (void)setupWithTrace:;
- (void)startTrackWithVC:;
- (void)onAppWillResignActive:;
- (BOOL)ttiEnabled;
- (void)setTtiEnabled:;
- (id)trace;
- (double)timeoutInterval;
- (void)setSession:;
- (void)setTimeoutInterval:;
- (void)finishWithResult:;
- (id)session;
- (void).cxx_destruct;
+ (id)metricWithTrace:;
+ (id)metric;
+ (BOOL)isEnabled;
+ (id)kind;
@end
