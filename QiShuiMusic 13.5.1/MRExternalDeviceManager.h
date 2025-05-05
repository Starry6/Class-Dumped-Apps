@interface MRExternalDeviceManager : NSObject
@property (nonatomic) NSArray allDevices;
- (id)init;
- (id)allDevices;
- (void).cxx_destruct;
- (void)clearDevices;
- (void)registerDevice:;
- (id)deviceWithIdentifier:;
+ (id)sharedManager;
@end
