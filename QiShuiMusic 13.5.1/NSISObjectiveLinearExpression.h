@interface NSISObjectiveLinearExpression : NSObject
- (id)init;
- (void)dealloc;
- (unsigned long long)_variableCount;
- (void)_replaceVar:withExpression:processVarNewToReceiver:processVarDroppedFromReceiver:;
- (BOOL)_restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:;
- (void)_removeVar:;
- (id)description;
- (id)_initWithEngine:;
- (void)_addVar:priority:times:;
@end
