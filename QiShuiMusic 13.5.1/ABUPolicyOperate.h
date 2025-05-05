@interface ABUPolicyOperate : NSObject
+ (double)expression:andExpression:;
+ (id)match:withRanges:;
+ (id)match:withRanges:andValues:andMode:;
+ (double)scoresWithValues:andSymbol:;
+ (double)symbol:andSymbol:;
@end
