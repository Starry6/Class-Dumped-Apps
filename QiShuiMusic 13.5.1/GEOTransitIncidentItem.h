@interface GEOTransitIncidentItem : PBCodable
@property (nonatomic) BOOL hasTransitIncidentTitle;
@property (nonatomic) NSString transitIncidentTitle;
@property (nonatomic) BOOL hasTransitLineMuid;
@property (nonatomic) NSString transitLineMuid;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasTransitIncidentTitle;
- (id)transitIncidentTitle;
- (void)setTransitIncidentTitle:;
- (BOOL)hasTransitLineMuid;
- (id)transitLineMuid;
- (void)setTransitLineMuid:;
+ (BOOL)isValid:;
@end
