@interface BDXBridgeReportALogMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (int)mappedLogLevelWithLogLevel:;
- (id)methodName;
+ (id)metaInfo;
@end
