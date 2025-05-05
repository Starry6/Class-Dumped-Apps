@interface SSItemOfferDevice : NSObject
@property (nonatomic) q deviceIdentifier;
@property (nonatomic) NSString minimumProductVersion;
@property (nonatomic) SSItemOfferDeviceError incompatibleDeviceError;
@property (nonatomic) SSItemOfferDeviceError incompatibleSystemError;
- (id)init;
- (long long)deviceIdentifier;
- (void)dealloc;
- (id)initWithDeviceIdentifier:;
- (id)initWithOfferDeviceDicitionary:;
- (id)incompatibleDeviceError;
- (id)incompatibleSystemError;
- (id)minimumProductVersion;
@end
