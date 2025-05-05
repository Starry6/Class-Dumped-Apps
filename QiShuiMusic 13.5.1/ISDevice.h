@interface ISDevice : NSObject
@property (nonatomic) NSString deviceName;
@property (nonatomic) NSString guid;
@property (nonatomic) NSString hardwareName;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSString systemName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serialNumber;
- (id)init;
- (void)dealloc;
- (id)deviceName;
- (BOOL)releasePowerAssertion:;
- (long long)deviceBiometricStyle;
- (id)systemName;
- (id)guid;
- (int)_deviceClass;
- (BOOL)checkCapabilities:withMismatches:;
- (id)copyProtocolConditionalContext;
- (id)hardwareName;
- (BOOL)takePowerAssertion:;
- (void)requestFreeSpace:atPath:withOptions:completionBlock:;
- (void)resetLocationAndPrivacy;
- (id)supportedOfferDeviceForDevices:;
+ (id)sharedInstance;
+ (void)setSharedInstance:;
@end
