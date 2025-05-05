@interface VCObject : NSObject
@property (nonatomic) NSString logPrefix;
@property (nonatomic) ^{opaqueRTCReporting=} reportingAgent;
- (id)init;
- (void)dealloc;
- (void)unlock;
- (void)lock;
- (id)logPrefix;
- (void)setLogPrefix:;
- (void)startTimeoutTimer;
- (id)reportingAgent;
- (void)setReportingAgent:;
- (void)stopTimeoutTimer;
- (void)startDeallocTimer;
- (void)startDeallocTimerWithTimeout:;
- (void)startTerminationTimer:terminationType:;
- (void)stopTerminationTimer;
+ (void)terminateProcess:terminateSource:agent:;
@end
