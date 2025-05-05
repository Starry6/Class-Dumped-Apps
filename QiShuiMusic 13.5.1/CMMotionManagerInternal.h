@interface CMMotionManagerInternal : NSObject
@property (nonatomic) NSOperationQueue fDeviceMotionLiteClientQueue;
@property (nonatomic) @? fDeviceMotionLiteFusedHandler;
@property (nonatomic) NSString fDeviceMotionLitePhysicalDeviceID;
- (id)init;
- (void)dealloc;
- (id)fDeviceMotionLiteFusedHandler;
- (id)fDeviceMotionLitePhysicalDeviceID;
- (void)teardownPrivate;
- (void)setFDeviceMotionLiteClientQueue:;
- (void)setFDeviceMotionLiteFusedHandler:;
- (void).cxx_destruct;
- (void)setFDeviceMotionLitePhysicalDeviceID:;
- (id)fDeviceMotionLiteClientQueue;
- (id).cxx_construct;
@end
