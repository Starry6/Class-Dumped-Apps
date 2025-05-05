@interface CJPayABTestNewPluginImpl : NSObject
@property (nonatomic) NSMutableDictionary experimentsDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)abTestValToString:;
- (id)experimentsDic;
- (id)getABTestValWithKey:exposure:;
- (void)registerABTestWithKey:defaultValue:;
- (void)registerABTestWithKey:defaultValue:isSticky:;
- (void)setExperimentsDic:;
- (void).cxx_destruct;
+ (void)registerPlugin;
+ (id)defaultService;
@end
