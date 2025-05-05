@interface LSSStrategyDynamicSR : LSSBaseStrategy
- (BOOL)checkIdDictionary:;
- (id)dynamicResult:;
- (id)initStrategy;
- (id)runLocalStrategy:;
+ (id)defaultStrategyInstance;
@end
