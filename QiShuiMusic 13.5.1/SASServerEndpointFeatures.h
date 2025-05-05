@interface SASServerEndpointFeatures : SABaseClientBoundCommand
@property (nonatomic) double eosLikelihood;
@property (nonatomic) q numOfWords;
@property (nonatomic) NSArray pauseCounts;
@property (nonatomic) q processedAudioDurationMs;
@property (nonatomic) double silenceProbability;
@property (nonatomic) NSString taskName;
@property (nonatomic) q trailingSilenceDuration;
- (void)setEosLikelihood:;
- (id)groupIdentifier;
- (double)eosLikelihood;
- (void)setTrailingSilenceDuration:;
- (long long)trailingSilenceDuration;
- (id)pauseCounts;
- (BOOL)requiresResponse;
- (long long)numOfWords;
- (id)taskName;
- (void)setNumOfWords:;
- (id)encodedClassName;
- (void)setTaskName:;
- (void)setPauseCounts:;
- (long long)processedAudioDurationMs;
- (void)setProcessedAudioDurationMs:;
- (double)silenceProbability;
- (void)setSilenceProbability:;
+ (id)serverEndpointFeatures;
+ (id)serverEndpointFeaturesWithDictionary:context:;
@end
