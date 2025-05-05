@interface BDUGLuckyInjectRules : BDUGLuckyBDModel
@property (nonatomic) BOOL globalEnableInjected;
@property (nonatomic) NSDictionary url2ruleMap;
- (void)setUrl2ruleMap:;
- (BOOL)globalEnableInjected;
- (BOOL)modelCustomTransformFromDictionary:;
- (void)setGlobalEnableInjected:;
- (id)url2ruleMap;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
