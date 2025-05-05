@interface MBDeviceTransferPreflight : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) Q sourceDeviceDataSize;
@property (nonatomic) Q targetDeviceFreeSpaceSize;
@property (nonatomic) Q sourcePurgeableSpaceSize;
@property (nonatomic) NSString activeAppleID;
@property (nonatomic) NSDictionary appleIDs;
- (id)init;
- (id)uuid;
- (void)setUuid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)appleIDs;
- (void)setAppleIDs:;
- (id)activeAppleID;
- (void)setActiveAppleID:;
- (unsigned long long)sourceDeviceDataSize;
- (void)setSourceDeviceDataSize:;
- (unsigned long long)targetDeviceFreeSpaceSize;
- (void)setTargetDeviceFreeSpaceSize:;
- (unsigned long long)sourcePurgeableSpaceSize;
- (void)setSourcePurgeableSpaceSize:;
+ (BOOL)supportsSecureCoding;
@end
