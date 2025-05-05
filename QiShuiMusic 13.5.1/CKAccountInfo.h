@interface CKAccountInfo : NSObject
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property (nonatomic) q deviceToDeviceEncryptionAvailability;
@property (nonatomic) q accountStatus;
@property (nonatomic) q accountPartition;
@property (nonatomic) BOOL hasValidCredentials;
- (void)setHasValidCredentials:;
- (id)init;
- (void)setIsFromCache:;
- (BOOL)isFromCache;
- (BOOL)supportsDeviceToDeviceEncryption;
- (void)setDeviceToDeviceEncryptionAvailability:;
- (void)setAccountPartition:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)deviceToDeviceEncryptionAvailability;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (long long)accountStatus;
- (void)setAccountStatus:;
- (id)description;
- (void)setSupportsDeviceToDeviceEncryption:;
- (BOOL)hasValidCredentials;
- (BOOL)isEqual:;
- (long long)accountPartition;
+ (BOOL)supportsSecureCoding;
+ (void)invalidateCachedAccountInfo;
@end
