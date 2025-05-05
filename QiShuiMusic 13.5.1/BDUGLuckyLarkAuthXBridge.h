@interface BDUGLuckyLarkAuthXBridge : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)methodName;
@end
