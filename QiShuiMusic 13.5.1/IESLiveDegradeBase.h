@interface IESLiveDegradeBase : NSObject
@property (nonatomic) Q degradeLevel;
- (void)executeDegradeWithDegradeLevel:;
- (BOOL)canDegradeAbility;
- (unsigned long long)degradeLevel;
- (void)setDegradeLevel:;
- (void)trackerEventParams:inDegradeLevel:;
- (void)reset;
@end
