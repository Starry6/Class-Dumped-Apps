@interface VKRunningCurve : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (void)appendPosition:atTime:positionBehind:;
- (BOOL)hasStateAtTime:;
- (id)stateAtTime:;
@end
