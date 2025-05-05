@interface MCDeviceCapabilities : NSObject
@property (nonatomic) BOOL supportsBlockLevelEncryption;
@property (nonatomic) BOOL supportsFileLevelEncryption;
@property (nonatomic) BOOL hasSEP;
- (id)init;
- (BOOL)_mediaDiskIsEncrypted;
- (BOOL)validateCapabilitiesRequiredByRestrictions:localizedIncompatibilityMessage:outError:;
- (BOOL)supportsBlockLevelEncryption;
- (BOOL)supportsFileLevelEncryption;
- (BOOL)hasSEP;
+ (id)currentDevice;
@end
