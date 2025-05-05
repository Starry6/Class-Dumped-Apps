@interface IESLiveMessageAnimationDegradeAbility : IESLiveDegradeBase
@property (nonatomic) BOOL canDegrade;
- (void)executeDegradeWithDegradeLevel:;
- (BOOL)canDegrade;
- (BOOL)canDegradeAbility;
- (void)setCanDegrade:;
- (void)trackerEventParams:inDegradeLevel:;
- (void)reset;
@end
