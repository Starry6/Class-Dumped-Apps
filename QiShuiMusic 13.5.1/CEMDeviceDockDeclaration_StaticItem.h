@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase
@property (nonatomic) CEMDeviceDockDeclaration_StaticItemTileData payloadTileData;
@property (nonatomic) NSString payloadTileType;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadTileData;
- (void)setPayloadTileData:;
- (id)payloadTileType;
- (void)setPayloadTileType:;
+ (id)allowedPayloadKeys;
+ (id)buildWithTileData:withTileType:;
+ (id)buildRequiredOnlyWithTileData:withTileType:;
@end
