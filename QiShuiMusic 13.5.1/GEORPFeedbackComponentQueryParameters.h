@interface GEORPFeedbackComponentQueryParameters : PBCodable
@property (nonatomic) BOOL hasPoiEnrichmentQueryParameters;
@property (nonatomic) GEORPPoiEnrichmentQueryParameters poiEnrichmentQueryParameters;
@property (nonatomic) BOOL hasRapQueryParameters;
@property (nonatomic) GEORPRapQueryParameters rapQueryParameters;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
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
- (BOOL)hasPoiEnrichmentQueryParameters;
- (id)poiEnrichmentQueryParameters;
- (void)setPoiEnrichmentQueryParameters:;
- (BOOL)hasRapQueryParameters;
- (id)rapQueryParameters;
- (void)setRapQueryParameters:;
+ (BOOL)isValid:;
@end
