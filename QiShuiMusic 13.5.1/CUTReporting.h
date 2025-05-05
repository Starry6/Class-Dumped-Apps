@interface CUTReporting : NSObject
@property (nonatomic) CUTPromise promise;
@property (nonatomic) {os_unfair_lock_s=I} promiseLock;
- (id)init;
- (void)_startConfigurationOfSession:withPromiseSeal:;
- (id)_RTCSessionPromiseWithBatchingInterval:;
- (void)_failSeal:withError:;
- (void)_fullfillSeal:withSession:;
- (id)promiseLock;
- (id)promise;
- (void)_beginPromiseTimeoutWithInterval:;
- (void)setPromise:;
- (void).cxx_destruct;
+ (void)startRTCReportingSessionWithCompletion:;
+ (id)reportingSession;
+ (id)RTCSessionPromiseWithBatchingInterval:;
+ (id)_rtcReportingSession;
@end
