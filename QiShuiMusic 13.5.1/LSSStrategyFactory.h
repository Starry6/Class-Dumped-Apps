@interface LSSStrategyFactory : NSObject
@property (nonatomic) NSDictionary name2StrategyClassMap;
- (id)runStartegy:projectKey:sdkInfo:;
- (id)name2StrategyClassMap;
- (void)setName2StrategyClassMap:;
- (void)updateStrategyInfo:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultStrategyFactory;
@end
