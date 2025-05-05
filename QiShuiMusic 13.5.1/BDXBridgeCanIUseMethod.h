@interface BDXBridgeCanIUseMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)propertiesForModelClass:;
- (Class)resultModelClass;
- (id)methodName;
+ (id)metaInfo;
@end
