@interface SiriAnalyticsSensitiveConditionSpan : NSObject
@property (nonatomic) NSInteger conditionType;
@property (nonatomic) Q startedAt;
@property (nonatomic) Q endedAt;
- (void)setStartedAt:;
- (unsigned long long)startedAt;
- (int)conditionType;
- (void)setConditionType:;
- (void)setEndedAt:;
- (unsigned long long)endedAt;
- (id)initWithConditionType:startedAt:;
- (BOOL)hasEndedAt;
- (BOOL)containsTimestamp:;
@end
