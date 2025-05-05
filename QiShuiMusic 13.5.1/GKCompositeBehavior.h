@interface GKCompositeBehavior : GKBehavior
@property (nonatomic) q behaviorCount;
- (id)init;
- (id)objectAtIndexedSubscript:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (void)removeBehavior:;
- (void).cxx_destruct;
- (void)removeAllBehaviors;
- (id)getTotalForce:agent:;
- (long long)behaviorCount;
- (id)initWithBehaviors:;
- (id)initWithBehaviors:andWeights:;
- (void)setWeight:forBehavior:;
- (float)weightForBehavior:;
+ (id)behaviorWithBehaviors:;
+ (id)behaviorWithBehaviors:andWeights:;
@end
