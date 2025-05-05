@interface BWVariableFrameRateParameters : NSObject
@property (nonatomic) NSString portType;
@property (nonatomic) NSInteger motionThreshold;
@property (nonatomic) NSDictionary aeMaxGain;
- (id)portType;
- (void)dealloc;
- (id)aeMaxGain;
- (id)initWithPortType:sensorIDDictionary:;
- (id)description;
- (int)motionThreshold;
@end
