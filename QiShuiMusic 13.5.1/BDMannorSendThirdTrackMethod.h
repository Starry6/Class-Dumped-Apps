@interface BDMannorSendThirdTrackMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (long long)authType;
- (id)methodName;
@end
