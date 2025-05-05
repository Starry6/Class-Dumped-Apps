@interface BDXBridgeInspireSendAlogMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)methodName;
+ (id)metaInfo;
@end
