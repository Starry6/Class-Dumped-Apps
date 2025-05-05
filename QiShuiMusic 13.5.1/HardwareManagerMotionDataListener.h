@interface HardwareManagerMotionDataListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onUpdateAttitudeRoll:pitch:yaw:;
- (id)initWithHardwareManager:;
- (void)onUpdateRotationRateX:y:z:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
