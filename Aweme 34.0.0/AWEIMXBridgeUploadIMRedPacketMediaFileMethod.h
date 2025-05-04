@interface AWEIMXBridgeUploadIMRedPacketMediaFileMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)p_trackAndInvokeCompletion:resultModel:status:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
