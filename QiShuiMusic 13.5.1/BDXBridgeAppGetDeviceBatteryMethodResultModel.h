@interface BDXBridgeAppGetDeviceBatteryMethodResultModel : BDXBridgeModel
@property (nonatomic) BOOL isLowBattery;
@property (nonatomic) NSNumber battery;
- (void)setIsLowBattery:;
- (BOOL)isLowBattery;
- (void).cxx_destruct;
- (id)battery;
- (void)setBattery:;
+ (id)JSONKeyPathsByPropertyKey;
@end
