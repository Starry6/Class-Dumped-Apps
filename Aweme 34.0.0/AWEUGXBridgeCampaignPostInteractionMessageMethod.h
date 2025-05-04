@interface AWEUGXBridgeCampaignPostInteractionMessageMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (void)callbackWithCompletion:result:status:enterMethod:name:;
- (void)getIdFromParam:completion:;
- (long long)authType;
- (id)methodName;
+ (id)frequencyDict;
+ (id)metaInfo;
@end
