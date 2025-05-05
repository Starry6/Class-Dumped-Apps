@interface ARCoachingDeviceController : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGPoint=dd} position;
@property (nonatomic) {CATransform3D=dddddddddddddddd} transform;
@property (nonatomic) float opacity;
- (void)setPosition:;
- (id)position;
- (void)setOpacity:;
- (void)setTransform:;
- (float)opacity;
- (id)transform;
- (void)setBounds:;
- (void).cxx_destruct;
- (id)bounds;
- (id)initWithDeviceMaskImage:solidColor:geoTrackingMode:;
- (id)initWithDeviceMaskImage:geoTrackingMode:;
- (void)update:visibility:layer:renderParams:;
- (void)setLayerParent:;
@end
