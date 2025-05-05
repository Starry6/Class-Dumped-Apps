@interface GEOPolyLocationShiftRequest : PBRequest
@property (nonatomic) GEOLatLng location;
- (void)readAll:;
- (BOOL)hasGreenTeaWithValue:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (Class)responseClass;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (id)location;
- (void)mergeFrom:;
- (void)setLocation:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
