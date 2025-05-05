@interface BDXBridgeReportMonitorLogMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (id)methodName;
+ (id)metaInfo;
@end
