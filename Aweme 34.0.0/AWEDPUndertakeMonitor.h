@interface AWEDPUndertakeMonitor : NSObject
@property (nonatomic) NSDictionary config;
@property (nonatomic) NSArray gdLabels;
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray hookEventList;
@property (nonatomic) NSDictionary ruleList;
- (BOOL)enableUndertakeEventHook;
- (id)undertakeHookEventList;
- (BOOL)undertakeHookEventV3:params:;
- (id)hookEventList;
- (BOOL)needUndertakeRenderStepForURL:;
- (void)setHookEventList:;
- (BOOL)isUndertakeURL:;
- (id)gdLabels;
- (BOOL)handleMagicPageStayTimeIfNeed:extraParams:;
- (void)setGdLabels:;
- (BOOL)enable;
- (void)setConfig:;
- (id)init;
- (id)config;
- (id)defaultConfig;
- (void).cxx_destruct;
- (void)_setup;
- (void)setEnable:;
- (id)ruleList;
- (void)setRuleList:;
+ (id)sharedInstance;
@end
