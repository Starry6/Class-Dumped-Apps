@interface IESIMSwiftRegisterableBase : NSObject
+ (BOOL)canEvaluateForModule:key:;
+ (void)evaluateAllFrom:;
+ (void)evaluateAllService;
+ (void)evaluateForModule:key:;
@end
