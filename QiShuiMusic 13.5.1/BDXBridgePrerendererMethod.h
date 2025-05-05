@interface BDXBridgePrerendererMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)getPageContext;
- (Class)resultModelClass;
- (long long)authType;
- (unsigned long long)engineTypes;
- (id)methodName;
@end
