@interface NRDeviceDiscoveryController : NSObject
@property (nonatomic) NSArray devices;
- (void)end;
- (id)init;
- (id)devices;
- (void)begin;
- (void)overrideSignalStrengthLimit:;
+ (id)sharedInstance;
@end
