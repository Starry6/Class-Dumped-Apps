@interface AWEXBridgePdaOpenVideoDetailMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (id)awe_checkParamValidity:;
- (BOOL)openVideoList:domainInfo:;
- (BOOL)openSingleVideo:domainInfo:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
