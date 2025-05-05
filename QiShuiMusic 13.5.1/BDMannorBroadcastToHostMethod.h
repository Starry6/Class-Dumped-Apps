@interface BDMannorBroadcastToHostMethod : BDXBridgeMethod
@property (nonatomic) NSDictionary injectHandlerMap;
@property (nonatomic) NSString componentType;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)injectHandlerMap;
- (void)setInjectHandlerMap:;
- (id)componentType;
- (void)setComponentType:;
- (long long)authType;
- (void).cxx_destruct;
- (id)methodName;
@end
