@interface BDXBridgeGetDeviceStatsMethod : BDXBridgeMethod
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (float)cpu_usage;
- (id)fmt2precious:;
- (id)memory_info:;
- (Class)resultModelClass;
- (float)temperature;
- (id)methodName;
+ (id)metaInfo;
@end
