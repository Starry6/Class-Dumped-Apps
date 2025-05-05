@interface GKBehavior : NSObject
@property (nonatomic) q goalCount;
- (id)init;
- (id)copy;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)objectAtIndexedSubscript:;
- (void)setObject:forKeyedSubscript:;
- (id)objectForKeyedSubscript:;
- (id)weights;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (long long)goalCount;
- (id)goals;
- (id)getTotalForce:agent:;
- (id)initWithGoal:weight:;
- (id)initWithGoals:;
- (id)initWithGoals:andWeights:;
- (id)initWithWeightedGoals:;
- (float)weightForGoal:;
- (void)removeGoal:;
- (void)removeAllGoals;
- (void)setWeight:forGoal:;
+ (id)behaviorWithGoal:weight:;
+ (id)behaviorWithGoals:;
+ (id)behaviorWithGoals:andWeights:;
+ (id)behaviorWithWeightedGoals:;
@end
