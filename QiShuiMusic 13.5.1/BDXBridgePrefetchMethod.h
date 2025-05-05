@interface BDXBridgePrefetchMethod : BDXBridgeMethod
@property (nonatomic) BDXContext bdxContext;
- (Class)paramModelClass;
- (id)bdxContext;
- (void)callWithParamModel:completionHandler:;
- (id)checkHeadersDict:;
- (id)checkParamsDict:;
- (id)findBusinessString;
- (id)findPageUrl;
- (void)prefetchMonitor:isSuccess:cacheCode:errorMsg:duration:api:;
- (id)prefetchUrlWithSchema:;
- (Class)resultModelClass;
- (void)setBdxContext:;
- (BOOL)shouldForceNetwork;
- (long long)authType;
- (void).cxx_destruct;
- (unsigned long long)engineTypes;
- (id)methodName;
@end
