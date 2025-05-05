@interface CEMNetworkVPNDeclaration_VendorConfig : CEMPayloadBase
@property (nonatomic) NSString payloadRealm;
@property (nonatomic) NSString payloadRole;
@property (nonatomic) NSString payloadGroup;
@property (nonatomic) NSString payloadLoginGroupOrDomain;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadRealm;
- (void)setPayloadRealm:;
- (id)payloadRole;
- (void)setPayloadRole:;
- (id)payloadGroup;
- (void)setPayloadGroup:;
- (id)payloadLoginGroupOrDomain;
- (void)setPayloadLoginGroupOrDomain:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRealm:withRole:withGroup:withLoginGroupOrDomain:;
@end
