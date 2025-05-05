@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest
@property (nonatomic) NSMutableArray significantLocations;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (void)clearSensitiveFields:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (Class)responseClass;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)significantLocations;
- (void)setSignificantLocations:;
- (void)clearSignificantLocations;
- (void)addSignificantLocation:;
- (unsigned long long)significantLocationsCount;
- (id)significantLocationAtIndex:;
+ (BOOL)isValid:;
+ (Class)significantLocationType;
@end
