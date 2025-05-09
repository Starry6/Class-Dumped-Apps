@interface IESLiveGetDeviceStatsParamModel : IESLiveBridgeModel
@property (nonatomic) BOOL memoryRest;
@property (nonatomic) BOOL cpuUsage;
@property (nonatomic) BOOL temperature;
@property (nonatomic) BOOL fps;
@property (nonatomic) BOOL temperatureIos;
@property (nonatomic) BOOL batteryLevel;
+ (id)modelCustomPropertyMapper;
@end
