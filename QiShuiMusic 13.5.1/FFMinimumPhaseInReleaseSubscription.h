@interface FFMinimumPhaseInReleaseSubscription : FFSubscription
@property (nonatomic) NSString targetRelease;
@property (nonatomic) NSString minimumPhase;
- (void).cxx_destruct;
- (id)encodeToDictionary;
- (BOOL)matchesFeature:inDomain:inConfiguration:;
- (BOOL)matchesFeature:inDomain:inAlreadyLockedConfiguration:;
- (id)nameOfClass;
- (id)initWithPhase:targetRelease:;
- (BOOL)matchesFeatureWithState:inConfigurationOfUnknownLockState:;
- (id)targetRelease;
- (id)minimumPhase;
+ (id)mergeSubscriptions:;
+ (id)decodeFromDictionary:;
@end
