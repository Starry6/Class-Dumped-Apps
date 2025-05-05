@interface TMRuleEngineManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)log:metric:category:extra:;
- (void)report:tags:block:;
- (id)ruleEngineConfig;
+ (void)registerCustomEnvWithKey:type:builder:;
+ (void)registerCustomEnvWithKey:type:value:;
+ (void)registerLocalNetworkFunctions;
+ (void)registerPasteboardFunctions;
+ (void)updateCustomEnvWithKey:type:value:;
+ (id)sharedInstance;
+ (void)start;
+ (void)appWillEnterForeground;
+ (void)appDidEnterBackground;
@end
