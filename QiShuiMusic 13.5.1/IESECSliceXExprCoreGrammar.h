@interface IESECSliceXExprCoreGrammar : NSObject
+ (BOOL)isGrammarValid:previousNode:nextNode:;
+ (id)parse:error:;
@end
