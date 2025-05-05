@interface MRAVDiscoverySessionHelper : NSObject
- (id)initWithFeatures:;
- (void)searchAVOutputDeviceForUID:timeout:identifier:reason:completion:;
- (id)createDiscoverySession;
@end
