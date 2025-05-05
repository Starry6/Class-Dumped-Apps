@interface BWNoiseReductionAndSharpeningParameters : NSObject
- (id)portType;
- (void)dealloc;
- (id)initWithPortType:sensorIDDictionary:;
- (id)noiseReductionAndSharpeningConfigurationForType:gain:;
- (id)description;
@end
