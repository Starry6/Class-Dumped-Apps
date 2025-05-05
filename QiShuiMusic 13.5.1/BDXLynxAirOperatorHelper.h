@interface BDXLynxAirOperatorHelper : NSObject
+ (BOOL)hasControlFlow:;
+ (BOOL)isConditionTrue:;
+ (BOOL)isOperator:;
+ (BOOL)isValidParams:count:error:;
+ (id)unifyResult:error:;
+ (id)valueForKeyPath:inCollection:error:;
@end
