@interface IESECXBridgeEcMallOpenSchemaMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)createJumpSourceBtmTokenWithParamModel:;
- (id)createJumpSourceBtmTokenWithParamModel:host:;
- (id)guardLiveTopLevelForSchema:;
- (BOOL)isMultiTabScene:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
