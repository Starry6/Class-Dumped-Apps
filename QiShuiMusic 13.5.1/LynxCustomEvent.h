@interface LynxCustomEvent : LynxEvent
@property (nonatomic) NSMutableDictionary params;
- (id)initWithName:targetSign:params:;
- (void)addDetailKey:value:;
- (id)generateEventBody;
- (id)initWithName:targetSign:;
- (id)initWithName:targetSign:currentTargetSign:params:;
- (id)paramsName;
- (void).cxx_destruct;
- (id)description;
- (id)params;
- (void)setParams:;
@end
