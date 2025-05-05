@interface BWOpportunisticInferenceAnalyticsPayload : NSObject
@property (nonatomic) q totalInferenceExecutionTime;
@property (nonatomic) q inferenceDeadlineOverdue;
@property (nonatomic) I facesProcessedCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)eventName;
- (void)reset;
- (id)eventDictionary;
- (long long)totalInferenceExecutionTime;
- (void)setTotalInferenceExecutionTime:;
- (long long)inferenceDeadlineOverdue;
- (void)setInferenceDeadlineOverdue:;
- (unsigned int)facesProcessedCount;
- (void)setFacesProcessedCount:;
@end
