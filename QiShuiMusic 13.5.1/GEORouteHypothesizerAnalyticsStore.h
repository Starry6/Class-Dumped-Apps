@interface GEORouteHypothesizerAnalyticsStore : NSObject
@property (nonatomic) Q etaUpdatesAfterEventStart;
@property (nonatomic) BOOL etaUpdatesWereReported;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)didReroute;
- (void)didStartMovingWithExpectedDepartureTime:;
- (void)didStopMoving;
- (void)didArriveWithExpectedArrivalTime:;
- (void)didGenerateHypothesis;
- (void)didStopHypothesizing;
- (void)didShowUI:;
- (unsigned long long)etaUpdatesAfterEventStart;
- (void)setEtaUpdatesAfterEventStart:;
- (BOOL)etaUpdatesWereReported;
- (void)setEtaUpdatesWereReported:;
+ (BOOL)supportsSecureCoding;
@end
