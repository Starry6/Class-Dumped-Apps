@interface ABUBehaviorPolicyManager : ABUSingleton
@property (nonatomic) BOOL behaviorEnable;
@property (nonatomic) Q behaviorState;
@property (nonatomic) NSMutableDictionary exc;
@property (nonatomic) NSArray behaviorStates;
- (id)excForPrimeRit:;
- (id)exc;
- (void)setExc:;
- (BOOL)behaviorEnable;
- (unsigned long long)behaviorState;
- (id)behaviorStates;
- (void)setBehaviorEnable:;
- (void)setBehaviorState:;
- (void)updateExcs:;
- (id)init;
- (void).cxx_destruct;
+ (void)updateExcs:;
+ (id)sharedInstance;
@end
