@interface LynxDetailEvent : LynxCustomEvent
- (id)initWithName:targetSign:detail:;
- (id)initWithName:targetSign:currentTargetSign:detail:;
- (id)paramsName;
@end
