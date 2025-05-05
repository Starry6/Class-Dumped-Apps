@interface BDXBridgeUploadFileMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (void)uploadFileWithParamModel:methodName:completionHandler:;
+ (id)metaInfo;
@end
