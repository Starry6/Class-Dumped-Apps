@interface GEOVLFTileDetails : PBCodable
@property (nonatomic) BOOL hasTileId;
@property (nonatomic) GEOVLFUsageTileID tileId;
@property (nonatomic) BOOL hasTileSizeBytes;
@property (nonatomic) I tileSizeBytes;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasTileId;
- (id)tileId;
- (void)setTileId:;
- (unsigned int)tileSizeBytes;
- (void)setTileSizeBytes:;
- (void)setHasTileSizeBytes:;
- (BOOL)hasTileSizeBytes;
+ (BOOL)isValid:;
@end
