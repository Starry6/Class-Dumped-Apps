@interface LynxConfig : NSObject
@property (nonatomic) <LynxTemplateProvider> templateProvider;
@property (nonatomic) LynxComponentScopeRegistry componentRegistry;
@property (nonatomic) NSMutableDictionary contextDict;
- (void)setContextDict:;
- (id)componentRegistry;
- (id)contextDict;
- (id)moduleManagerPtr;
- (void)registerContext:sessionInfo:;
- (void)registerMethodAuth:;
- (void)registerModule:param:;
- (void)registerShadowNode:withName:;
- (void)registerUI:withName:;
- (void)setComponentRegistry:;
- (void)setRenderkitImpl:;
- (id)init;
- (id)initWithProvider:;
- (void).cxx_destruct;
- (void)registerModule:;
- (id).cxx_construct;
- (id)templateProvider;
+ (id)globalConfig;
+ (void)prepareGlobalConfig:;
@end
