@interface BDXBridgeReportMonitorLogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString logType;
@property (nonatomic) NSString service;
@property (nonatomic) NSNumber status;
@property (nonatomic) NSDictionary value;
- (void)setStatus:;
- (void)setService:;
- (id)logType;
- (id)service;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setLogType:;
- (id)value;
- (id)status;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
