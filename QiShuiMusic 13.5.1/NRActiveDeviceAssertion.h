@interface NRActiveDeviceAssertion : NSObject
@property (nonatomic) BOOL isActive;
@property (nonatomic) NRDevice device;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)device;
- (BOOL)isActive;
@end
