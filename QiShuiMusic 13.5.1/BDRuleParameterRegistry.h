@interface BDRuleParameterRegistry : NSObject
@property (nonatomic) NSMutableDictionary registryMap;
- (void)setRegistryMap:;
- (id)__builderForKey:;
- (void)__registerParameterWithKey:origin:type:builder:value:;
- (id)registryMap;
- (void)updateParameterWithKey:type:value:;
- (id)init;
- (void).cxx_destruct;
+ (id)constParameters;
+ (id)stateParameters;
+ (void)registerConstParameterWithKey:type:value:;
+ (void)registerParameterWithKey:type:builder:;
+ (void)registerParameterWithKey:type:value:;
+ (void)updateParameterWithKey:type:value:;
+ (id)sharedInstance;
+ (id)allParameters;
+ (id)builderForKey:;
@end
