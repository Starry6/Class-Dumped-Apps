@interface BDXBridgeGetAbsolutePathMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (Class)resultModelClass;
- (long long)authType;
- (id)methodName;
+ (id)absoluteFilePathForRelativeFilePath:fileExists:;
+ (id)metaInfo;
@end
