@interface GEORPSiriContext : PBCodable
@property (nonatomic) BOOL hasSiriIncidentType;
@property (nonatomic) NSString siriIncidentType;
@property (nonatomic) BOOL hasAdditionalDetails;
@property (nonatomic) NSString additionalDetails;
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
- (BOOL)hasSiriIncidentType;
- (id)siriIncidentType;
- (void)setSiriIncidentType:;
- (BOOL)hasAdditionalDetails;
- (id)additionalDetails;
- (void)setAdditionalDetails:;
+ (BOOL)isValid:;
@end
