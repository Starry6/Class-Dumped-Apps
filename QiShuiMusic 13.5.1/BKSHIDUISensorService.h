@interface BKSHIDUISensorService : NSObject
@property (nonatomic) BKSHIDUISensorCharacteristics sensorCharacteristics;
- (id)init;
- (void)_lock_setupAssertion;
- (void).cxx_destruct;
- (id)sensorCharacteristics;
- (id)requestUISensorMode:;
+ (id)sharedInstance;
@end
