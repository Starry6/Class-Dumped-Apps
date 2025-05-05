@interface PAEnrollment : NSObject
@property (nonatomic) PAConfiguration audiogramPreset;
@property (nonatomic) NSMutableDictionary enrollmentHandlers;
@property (nonatomic) Q selectedLevel;
@property (nonatomic) Q progress;
- (id)init;
- (void)setProgress:;
- (unsigned long long)progress;
- (void).cxx_destruct;
- (unsigned long long)selectedLevel;
- (void)setSelectedLevel:;
- (void)addHandlers;
- (void)addOffEnrollmentStepComparing:;
- (void)addLevelEnrollmentStepsStartingWith:;
- (void)addEnrollmentStepForSection:comparing:withOption:andBlock:;
- (id)enrollmentNodeAfter:withSelectedNode:;
- (id)audiogramPreset;
- (void)setAudiogramPreset:;
- (id)enrollmentHandlers;
- (void)setEnrollmentHandlers:;
+ (id)enrollmentWithAudiogram:;
@end
