@interface BDXMonitorBridgeMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary category;
@property (nonatomic) NSDictionary metric;
- (id)eventName;
- (void)setEventName:;
- (void)setCategory:;
- (void).cxx_destruct;
- (void)setMetric:;
- (id)metric;
- (id)category;
+ (id)JSONKeyPathsByPropertyKey;
@end
