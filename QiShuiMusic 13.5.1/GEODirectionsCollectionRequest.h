@interface GEODirectionsCollectionRequest : PBRequest
@property (nonatomic) NSMutableArray requestElements;
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
- (id)requestElements;
- (void)setRequestElements:;
- (void)clearRequestElements;
- (void)addRequestElements:;
- (unsigned long long)requestElementsCount;
- (id)requestElementsAtIndex:;
+ (BOOL)isValid:;
+ (Class)requestElementsType;
@end
