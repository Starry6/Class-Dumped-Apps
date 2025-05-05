@interface BDMannorShowFeedbackComponentMethod : BDXBridgeMethod
@property (nonatomic) NSDictionary injectHandlerMap;
@property (nonatomic) NSString componentType;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)injectHandlerMap;
- (Class)resultModelClass;
- (void)setInjectHandlerMap:;
- (id)componentType;
- (void)setComponentType:;
- (long long)authType;
- (void).cxx_destruct;
- (id)methodName;
@end
