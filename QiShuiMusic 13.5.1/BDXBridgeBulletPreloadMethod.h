@interface BDXBridgeBulletPreloadMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)onRunloopIdle:;
- (long long)authType;
- (id)methodName;
+ (id)metaInfo;
@end
