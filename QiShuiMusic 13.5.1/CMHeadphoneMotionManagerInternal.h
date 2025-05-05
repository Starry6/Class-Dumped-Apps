@interface CMHeadphoneMotionManagerInternal : NSObject
@property (nonatomic) CMDeviceMotion deviceMotion;
@property (nonatomic) CMAttitude initialReferenceAttitude;
- (id)init;
- (void)dealloc;
- (void)disconnect;
- (id)deviceMotion;
- (void)connect;
- (void)setDeviceMotion:;
- (id)initialReferenceAttitude;
- (void)setInitialReferenceAttitude:;
@end
