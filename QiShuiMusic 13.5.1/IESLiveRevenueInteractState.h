@interface IESLiveRevenueInteractState : NSObject
@property (nonatomic) q value;
@property (nonatomic) NSString tag;
@property (nonatomic) BOOL isParallel;
@property (nonatomic) NSMutableDictionary transitions;
@property (nonatomic) NSArray combinedStates;
@property (nonatomic) @? didEnterState;
- (void)addEvent:toState:;
- (void)addEvent:toState:condition:;
- (id)combinedStates;
- (id)didEnterState;
- (void)handleEvent:completion:;
- (id)initWithState:tag:;
- (id)initWithStates:value:tag:;
- (id)realState;
- (void)setCombinedStates:;
- (void)setDidEnterState:;
- (void)setIsParallel:;
- (id)tag;
- (void)setTag:;
- (id)transitions;
- (void)setValue:;
- (void)setTransitions:;
- (void).cxx_destruct;
- (long long)value;
- (BOOL)isParallel;
- (BOOL)containsState:;
@end
