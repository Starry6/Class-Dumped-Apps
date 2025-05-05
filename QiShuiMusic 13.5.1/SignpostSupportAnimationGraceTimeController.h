@interface SignpostSupportAnimationGraceTimeController : NSObject
@property (nonatomic) NSMutableDictionary subsystemGraceTimesDictionary;
@property (nonatomic) SignpostSupportAnimationGraceTime userInteractiveGraceTime;
@property (nonatomic) SignpostSupportAnimationGraceTime userInitiatedGraceTime;
@property (nonatomic) SignpostSupportAnimationGraceTime defaultGraceTime;
@property (nonatomic) Q userInteractiveGraceTimeMs;
@property (nonatomic) Q userInitiatedGraceTimeMs;
@property (nonatomic) Q defaultGraceTimeMs;
- (id)init;
- (unsigned long long)userInitiatedGraceTimeMs;
- (unsigned long long)defaultGraceTimeMs;
- (id)defaultGraceTime;
- (id)debugDescription;
- (void)setAnimationType:forSubsystem:category:name:;
- (void)setFirstFrameGraceTimeMs:forSubsystem:category:name:;
- (void)setUserInitiatedGraceTimeMs:;
- (id)gracetimeForSubsystem:category:name:;
- (void)setUserInteractiveGraceTimeMs:;
- (void).cxx_destruct;
- (id)subsystemGraceTimesDictionary;
- (void)setDefaultGraceTimeMs:;
- (id)userInteractiveGraceTime;
- (id)userInitiatedGraceTime;
- (void)_setFirstFrameGraceTime:forSubsystem:category:name:;
- (unsigned long long)userInteractiveGraceTimeMs;
- (unsigned long long)gracetimeMsForSubsystem:category:name:;
@end
