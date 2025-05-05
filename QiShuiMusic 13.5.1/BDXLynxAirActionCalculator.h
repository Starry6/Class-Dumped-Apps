@interface BDXLynxAirActionCalculator : NSObject
+ (id)_operatorMapper;
+ (void)_preprocessParamsTemplate:arguments:finalParams:keyPathPrefix:inContext:error:;
+ (id)concatKeypathUsingKey:andPrefix:;
+ (id)evaluateExpression:arguments:inContext:error:;
+ (id)preprocessParamsTemplate:arguments:inContext:error:;
@end
