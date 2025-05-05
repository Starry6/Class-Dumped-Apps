@interface NSISObjectiveLinearExpressionProxy : NSObject
- (id)initWithEngine:;
- (unsigned long long)variableCount;
- (void)replaceVar:withExpression:processVarNewToReceiver:processVarDroppedFromReceiver:;
- (void)addVar:priority:times:;
- (void)removeVar:;
- (BOOL)restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:;
@end
