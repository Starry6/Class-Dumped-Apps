@interface CKRecordZone : NSObject
@property (nonatomic) BOOL hasUpdatedExpirationTimeInterval;
@property (nonatomic) NSNumber updatedExpirationTimeInterval;
@property (nonatomic) NSInteger deviceCount;
@property (nonatomic) CKServerChangeToken currentServerChangeToken;
@property (nonatomic) NSData clientChangeToken;
@property (nonatomic) NSData protectionData;
@property (nonatomic) NSString protectionEtag;
@property (nonatomic) NSData zoneishProtectionData;
@property (nonatomic) NSData pcsKeyID;
@property (nonatomic) NSData zoneishKeyID;
@property (nonatomic) CKReference share;
@property (nonatomic) BOOL needsZoneishPCSRolled;
@property (nonatomic) BOOL zoneKeyRollAllowed;
@property (nonatomic) NSString zonePCSLastModifierDevice;
@property (nonatomic) NSString previousProtectionEtag;
@property (nonatomic) q assetQuotaUsage;
@property (nonatomic) q metadataQuotaUsage;
@property (nonatomic) NSDate zonePCSModificationDate;
@property (nonatomic) BOOL serializeProtectionData;
@property (nonatomic) NSArray invitedKeysToRemove;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL expired;
@property (nonatomic) CKRecordZoneID zoneID;
@property (nonatomic) Q capabilities;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientChangeToken;
- (void)setClientChangeToken:;
- (id)pcsKeyID;
- (id)initWithZoneID:;
- (void)CKDescribePropertiesUsing:;
- (void)setCapabilities:;
- (void)setNeedsZoneishPCSRolled:;
- (unsigned long long)capabilities;
- (void)setExpired:;
- (id)initWithZoneName:;
- (void)setShare:;
- (void)setPcsKeyID:;
- (BOOL)isExpired;
- (void)setProtectionData:;
- (id)share;
- (void)setZonePCSModificationDate:;
- (id)redactedDescription;
- (id)zoneID;
- (void)setZoneID:;
- (long long)metadataQuotaUsage;
- (void)setExpirationDate:;
- (void)setExpirationAfterTimeInterval:;
- (long long)assetQuotaUsage;
- (id)initWithCoder:;
- (void)CKAssignToContainerWithID:;
- (void)setSerializeProtectionData:;
- (id)zonePCSLastModifierDevice;
- (id)updatedExpirationTimeInterval;
- (id)zoneishKeyID;
- (void)setZoneishProtectionData:;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (id)invitedKeysToRemove;
- (void)setInvitedKeysToRemove:;
- (void)setUpdatedExpirationTimeInterval:;
- (id)protectionData;
- (void)setZonePCSLastModifierDevice:;
- (void)setDeviceCount:;
- (void)setZoneishKeyID:;
- (void).cxx_destruct;
- (void)setProtectionEtag:;
- (BOOL)needsZoneishPCSRolled;
- (id)zonePCSModificationDate;
- (id)currentServerChangeToken;
- (void)setMetadataQuotaUsage:;
- (void)setAssetQuotaUsage:;
- (id)description;
- (id)zoneishProtectionData;
- (void)setCurrentServerChangeToken:;
- (void)setZoneKeyRollAllowed:;
- (void)setPreviousProtectionEtag:;
- (BOOL)serializeProtectionData;
- (int)deviceCount;
- (BOOL)zoneKeyRollAllowed;
- (BOOL)hasUpdatedExpirationTimeInterval;
- (id)protectionEtag;
- (void)setHasUpdatedExpirationTimeInterval:;
- (id)previousProtectionEtag;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)systemRecordZone;
+ (id)defaultRecordZone;
@end
