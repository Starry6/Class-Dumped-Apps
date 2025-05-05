@interface BDXBridgeGetStorageItemMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;
@end
