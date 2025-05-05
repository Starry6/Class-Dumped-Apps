@interface BDXBridgeInspireOpenAppMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (BOOL)resolveAppWithParams:payloadData:;
- (Class)resultModelClass;
- (id)methodName;
+ (id)metaInfo;
@end
