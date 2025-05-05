@interface EKAvailabilityCache : NSObject
- (id)initWithSource:;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)_cachedSpanResultsBetweenStartDate:endDate:ignoredEventID:addresses:;
- (BOOL)_validateRequestStartDate:endDate:addresses:error:;
- (id)requestAvailabilityBetweenStartDate:endDate:ignoredEventID:addresses:resultsBlock:completionBlock:;
- (id)cachedAvailabilityInDateRange:ignoredEventID:addresses:;
- (void)cachedAvailabilityInDateRange:ignoredEventID:addresses:results:;
- (void)cancelAvailabilityRequestWithID:;
- (void)_handleResults:resultsBlock:ignoredEventID:;
- (id)_dictionaryForIgnoredEventID:;
+ (long long)_convertType:;
+ (BOOL)_isValidStartDate:endDate:;
+ (id)_generateEventKitSpansFromPersistenceSpans:;
+ (void)_logRequestElapsedTime:forNumberOfAddresses:;
@end
