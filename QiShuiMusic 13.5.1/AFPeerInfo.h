@interface AFPeerInfo : NSObject
@property (nonatomic) NSString sharedUserID;
@property (nonatomic) BOOL isDeviceOwnedByCurrentUser;
@property (nonatomic) NSString assistantIdentifier;
@property (nonatomic) NSString sharedUserIdentifier;
@property (nonatomic) NSString idsIdentifier;
@property (nonatomic) NSString idsDeviceUniqueIdentifier;
@property (nonatomic) NSString rapportEffectiveIdentifier;
@property (nonatomic) NSString homeKitAccessoryIdentifier;
@property (nonatomic) NSString mediaSystemIdentifier;
@property (nonatomic) NSString mediaRouteIdentifier;
@property (nonatomic) BOOL isCommunalDevice;
@property (nonatomic) NSString roomName;
@property (nonatomic) NSString name;
@property (nonatomic) NSString productType;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString userInterfaceIdiom;
@property (nonatomic) NSString aceVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mediaSystemIdentifier;
- (id)assistantIdentifier;
- (id)buildVersion;
- (id)productType;
- (id)idsIdentifier;
- (id)mediaRouteIdentifier;
- (id)init;
- (id)ad_shortDescription;
- (id)homeKitAccessoryIdentifier;
- (id)initWithIsDeviceOwnedByCurrentUser:assistantIdentifier:sharedUserIdentifier:idsIdentifier:idsDeviceUniqueIdentifier:rapportEffectiveIdentifier:homeKitAccessoryIdentifier:mediaSystemIdentifier:mediaRouteIdentifier:isCommunalDevice:roomName:name:productType:buildVersion:userInterfaceIdiom:aceVersion:;
- (id)sharedUserID;
- (id)buildDictionaryRepresentation;
- (BOOL)isDeviceOwnedByCurrentUser;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)sharedUserIdentifier;
- (id)initWithDictionaryRepresentation:;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (void)encodeWithCoder:;
- (id)initWithIsDeviceOwnedByCurrentUser:assistantIdentifier:idsIdentifier:idsDeviceUniqueIdentifier:sharedUserID:rapportEffectiveIdentifier:homeKitAccessoryIdentifier:mediaSystemIdentifier:mediaRouteIdentifier:isCommunalDevice:roomName:name:productType:buildVersion:userInterfaceIdiom:aceVersion:;
- (id)userInterfaceIdiom;
- (void).cxx_destruct;
- (id)aceVersion;
- (id)description;
- (id)rapportEffectiveIdentifier;
- (id)name;
- (id)idsDeviceUniqueIdentifier;
- (id)roomName;
- (BOOL)isCommunalDevice;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
