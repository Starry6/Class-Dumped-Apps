@interface EKAvailabilityCachedSpanRange : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)spans;
- (id)gatherFreshlyCachedSpansBetweenStartDate:endDate:;
- (long long)_currentMaxSpanTypeIn:;
- (void)sanitizeAndInsertResults:inRange:;
- (id)cachedSpansFromSpans:;
- (BOOL)spanType:isSimilarToSpanType:;
- (id)mergeSpansOfSameType:;
- (void)insertSpans:;
- (BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:endDate:;
+ (id)_clampDateRangeForSpans:startDate:endDate:;
@end
