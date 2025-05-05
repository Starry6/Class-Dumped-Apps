@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase
@property (nonatomic) NSString payloadLabel;
@property (nonatomic) NSString payloadUrl;
@property (nonatomic) NSNumber payloadFileType;
@property (nonatomic) CEMAnyPayload payloadFileData;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadFileType;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadLabel;
- (void)setPayloadLabel:;
- (id)payloadUrl;
- (void)setPayloadUrl:;
- (void)setPayloadFileType:;
- (id)payloadFileData;
- (void)setPayloadFileData:;
+ (id)allowedPayloadKeys;
+ (id)buildWithLabel:withUrl:withFileType:withFileData:;
+ (id)buildRequiredOnlyWithLabel:withFileType:;
@end
