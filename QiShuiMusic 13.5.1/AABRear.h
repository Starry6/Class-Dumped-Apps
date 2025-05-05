@interface AABRear : CBModule
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)registerNotificationBlock:;
- (void)unregisterNotificationBlock;
- (id)initWithQueue:;
- (id)initWithGrimaldi:;
- (id)copyParam:;
- (BOOL)checkSensorEnablementConditions:;
- (BOOL)shouldUseRLux:rLux:;
- (void)evaluateSamplingFrequencyWithLux:andCap:;
- (BOOL)shouldUseRearLuxFrontLux:rearLux:andCap:;
- (float)nitsRatio;
@end
