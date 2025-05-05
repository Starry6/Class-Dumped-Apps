@interface IESLiveCoreDegradeAbility : IESLiveDegradeBase
@property (nonatomic) BOOL canDegrade;
@property (nonatomic) BOOL executedlevel1Degrade;
- (void)executeDegradeWithDegradeLevel:;
- (BOOL)canDegrade;
- (BOOL)executedlevel1Degrade;
- (void)setCanDegrade:;
- (void)setExecutedlevel1Degrade:;
- (void)trackerEventParams:inDegradeLevel:;
- (void)reset;
@end
