@interface CEMApplicationAppStoreDeclaration : CEMAssetBase
@property (nonatomic) CEMAssetBaseDescriptor payloadDescriptor;
@property (nonatomic) NSString payloadBundleIdentifier;
@property (nonatomic) NSNumber payloadITunesStoreID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDescriptor;
- (void)setPayloadDescriptor:;
- (id)payloadBundleIdentifier;
- (void)setPayloadBundleIdentifier:;
- (id)payloadITunesStoreID;
- (void)setPayloadITunesStoreID:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withDescriptor:withBundleIdentifier:withITunesStoreID:;
+ (id)buildRequiredOnlyWithIdentifier:withDescriptor:withBundleIdentifier:withITunesStoreID:;
@end
