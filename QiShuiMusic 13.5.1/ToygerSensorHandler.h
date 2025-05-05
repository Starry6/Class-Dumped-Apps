@interface ToygerSensorHandler : NSObject
@property (nonatomic) float offset;
- (id)getSensorResult;
- (void)processSensorData:;
- (void)setOffset:;
- (void)dealloc;
- (id)initWithConfig:;
- (float)offset;
- (id)getSampleData;
@end
