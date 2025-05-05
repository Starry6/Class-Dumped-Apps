@interface SAAIRetrySearch : SABaseClientBoundCommand
@property (nonatomic) double minimumDurationForRetry;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (double)minimumDurationForRetry;
- (void)setMinimumDurationForRetry:;
+ (id)retrySearch;
+ (id)retrySearchWithDictionary:context:;
@end
