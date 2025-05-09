@interface CPAnalyticsTrialLoggingDestination : NSObject
@property (nonatomic) NSInteger trialProjectId;
@property (nonatomic) NSString trialNamespace;
@property (nonatomic) NSSet metricEvents;
@property (nonatomic) BOOL forceEnabledForTesting;
@property (nonatomic) TRIClient trialClient;
@property (nonatomic) NSString trialExperimentId;
@property (nonatomic) NSString trialTreatmentId;
@property (nonatomic) BOOL disabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateWithConfig:;
- (id)trialClient;
- (id)initWithConfig:cpAnalyticsInstance:;
- (void)setTrialExperimentId:;
- (BOOL)disabled;
- (void)processEvent:;
- (BOOL)forceEnabledForTesting;
- (id)trialNamespace;
- (void)setTrialClient:;
- (id)metricEvents;
- (void).cxx_destruct;
- (id)trialTreatmentId;
- (int)trialProjectId;
- (void)logTrialCounterMetricWithCPAnalyticsEvent:;
- (void)setTrialTreatmentId:;
- (id)trialExperimentId;
@end
