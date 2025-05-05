@interface GEOLogMsgEventNetworkSelectionHarvest : PBCodable
@property (nonatomic) BOOL hasHarvestData;
@property (nonatomic) NSData harvestData;
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
- (BOOL)hasHarvestData;
- (id)harvestData;
- (void)setHarvestData:;
+ (BOOL)isValid:;
@end
