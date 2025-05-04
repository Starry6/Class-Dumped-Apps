@interface AWEUGXBridgeCampaignUploadImageXMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)callbackWithCompletion:result:status:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
