@interface GEORPPoiEnrichmentQueryParameters : PBCodable
@property (nonatomic) BOOL hasScorecardVersion;
@property (nonatomic) NSString scorecardVersion;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (BOOL)hasScorecardVersion;
- (id)scorecardVersion;
- (void)setScorecardVersion:;
+ (BOOL)isValid:;
@end
