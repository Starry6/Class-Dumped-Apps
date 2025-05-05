@interface BDREWordParser : NSObject
+ (BOOL)checkStringIsNumber:;
+ (id)parseWordToNode:error:withFuncManager:operatorManager:;
+ (id)splitWord:error:;
+ (id)splitWords;
@end
