@interface BDXBridgeGetDeviceStatsMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber memory_all;
@property (nonatomic) NSNumber memory_use;
@property (nonatomic) NSNumber memory_rest;
@property (nonatomic) NSNumber memory_limit;
@property (nonatomic) NSNumber cpu_usage;
@property (nonatomic) NSNumber temperature;
- (void)setMemory_rest:;
- (id)cpu_usage;
- (id)memory_all;
- (id)memory_limit;
- (id)memory_rest;
- (id)memory_use;
- (void)setCpu_usage:;
- (void)setMemory_all:;
- (void)setMemory_limit:;
- (void)setMemory_use:;
- (void)setTemperature:;
- (void).cxx_destruct;
- (id)temperature;
+ (id)JSONKeyPathsByPropertyKey;
@end
