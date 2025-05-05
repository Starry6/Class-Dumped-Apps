@interface IESLiveGetDeviceStatsDataModel : IESLiveBridgeModel
@property (nonatomic) NSNumber memoryRest;
@property (nonatomic) NSNumber cpuUsage;
@property (nonatomic) NSNumber temperature;
@property (nonatomic) NSNumber fps;
@property (nonatomic) NSNumber temperatureIos;
@property (nonatomic) NSNumber batteryLevel;
+ (id)modelCustomPropertyMapper;
@end
