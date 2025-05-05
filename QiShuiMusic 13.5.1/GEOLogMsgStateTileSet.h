@interface GEOLogMsgStateTileSet : PBCodable
@property (nonatomic) NSMutableArray tileSetInfos;
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
- (id)tileSetInfos;
- (void)setTileSetInfos:;
- (void)clearTileSetInfos;
- (void)addTileSetInfo:;
- (unsigned long long)tileSetInfosCount;
- (id)tileSetInfoAtIndex:;
+ (BOOL)isValid:;
+ (Class)tileSetInfoType;
@end
