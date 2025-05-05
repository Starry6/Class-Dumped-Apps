@interface BWAmbientLightSensor : NSObject
@property (nonatomic) NSInteger luxLevel;
@property (nonatomic) float rearLuxLevel;
- (id)init;
- (void)dealloc;
- (int)luxLevel;
- (float)rearLuxLevel;
- (void)forceUpdateRearLuxLevel;
@end
