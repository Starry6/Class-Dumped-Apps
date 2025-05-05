@interface CMAnomalyManager : NSObject
@property (nonatomic) <CMAnomalyDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;
- (void)_registerForAnomalyDetection:;
- (void)ackAnomalyEvent:withResolution:;
- (void)_sendRegistrationForAnomalyEvent:;
- (void)respondToAnomalyEvent:withResponse:;
- (void)resolveAnomalyEvent:withResolution:;
- (void)updateAnomalyEventSOSCallState:withSOSSCallState:;
+ (BOOL)isAnomalyDetectionAvailable;
+ (long long)getAnomalyFeatureEnablingStrategyForUserAge:;
@end
