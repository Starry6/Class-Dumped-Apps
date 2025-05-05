@interface BDXBridgeChooseAndUploadMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (unsigned long long)transMediaType:;
- (void)callWithParamModel:completionHandler:;
- (id)chooseMethod;
- (id)getFileModel:;
- (id)getMediaParamsModel:;
- (id)getUploadParamsModel:media:;
- (Class)resultModelClass;
- (unsigned long long)transMediaCameraType:;
- (unsigned long long)transMediaSourceType:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
