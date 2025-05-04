@interface AWEXBridgeCampaignCloseLiveRoomMethod : BDXBridgeMethod
- (id)attachingDIContext;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
