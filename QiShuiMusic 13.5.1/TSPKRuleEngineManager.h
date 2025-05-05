@interface TSPKRuleEngineManager : NSObject
@property (nonatomic) @? extraParamsBuilder;
- (void)setExtraParams:;
- (id)extraParamsBuilder;
- (void)registerDefaultFunc;
- (void)setExtraParamsBuilder:;
- (void).cxx_destruct;
+ (id)sharedEngine;
@end
