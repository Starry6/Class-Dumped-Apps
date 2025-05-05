@interface SATTSEstimateTTSRequestDurationCompleted : SABaseClientBoundCommand
@property (nonatomic) NSArray durations;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setDurations:;
- (id)durations;
- (id)encodedClassName;
+ (id)estimateTTSRequestDurationCompleted;
+ (id)estimateTTSRequestDurationCompletedWithDictionary:context:;
@end
