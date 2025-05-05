@interface IESLiveALogDegradeAbility : IESLiveDegradeBase
@property (nonatomic) BOOL canDegrade;
@property (nonatomic) Q degradeLevel;
- (void)executeDegradeWithDegradeLevel:;
- (BOOL)canDegrade;
- (BOOL)canDegradeAbility;
- (unsigned long long)degradeLevel;
- (void)setCanDegrade:;
- (void)setDegradeLevel:;
- (void)trackerEventParams:inDegradeLevel:;
- (void)reset;
@end
