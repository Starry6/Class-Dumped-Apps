@interface VKAnalyticsSubjectEvent : VKAnalyticsEvent
@property (nonatomic) q eventType;
@property (nonatomic) q interactionType;
@property (nonatomic) BOOL subjectFound;
@property (nonatomic) double processingDuration;
- (void)setProcessingDuration:;
- (long long)eventType;
- (void)setEventType:;
- (long long)interactionType;
- (id)eventKey;
- (long long)type;
- (id)coreAnalyticsDictionary;
- (id)description;
- (void)setInteractionType:;
- (double)processingDuration;
- (id)initWithEventType:interactionType:subjectFound:processingDuration:customIdentifier:;
- (BOOL)subjectFound;
- (void)setSubjectFound:;
@end
