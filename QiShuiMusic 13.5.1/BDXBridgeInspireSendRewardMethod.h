@interface BDXBridgeInspireSendRewardMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)methodName;
+ (id)metaInfo;
@end
