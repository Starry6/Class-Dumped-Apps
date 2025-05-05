@interface IESLiveLikeAnimationDegradeAbility : IESLiveDegradeBase
@property (nonatomic) BOOL canDegrade;
@property (nonatomic) double diggRate;
@property (nonatomic) Q degradeLevel;
@property (nonatomic) double selfDiggRate;
- (void)executeDegradeWithDegradeLevel:;
- (BOOL)canDegrade;
- (BOOL)canDegradeAbility;
- (unsigned long long)degradeLevel;
- (double)diggRate;
- (double)selfDiggRate;
- (void)setCanDegrade:;
- (void)setDegradeLevel:;
- (void)setDiggRate:;
- (void)trackerEventParams:inDegradeLevel:;
- (id)init;
- (void)reset;
@end
