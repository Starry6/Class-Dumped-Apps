@interface PFSlowMotionConfiguration : NSObject
@property (nonatomic) float volumeDuringSlowMotion;
@property (nonatomic) float volumeDuringRampToSlowMotion;
@property (nonatomic) PFSlowMotionRampConfiguration rampDown;
@property (nonatomic) PFSlowMotionRampConfiguration rampUp;
- (id)init;
- (void).cxx_destruct;
- (float)volumeDuringSlowMotion;
- (float)volumeDuringRampToSlowMotion;
- (id)rampDown;
- (id)rampUp;
@end
