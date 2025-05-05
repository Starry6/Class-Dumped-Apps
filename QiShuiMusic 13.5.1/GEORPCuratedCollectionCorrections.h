@interface GEORPCuratedCollectionCorrections : PBCodable
@property (nonatomic) BOOL hasCorrectionType;
@property (nonatomic) NSInteger correctionType;
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
- (int)correctionType;
- (void)setCorrectionType:;
- (void)setHasCorrectionType:;
- (BOOL)hasCorrectionType;
- (id)correctionTypeAsString:;
- (int)StringAsCorrectionType:;
+ (BOOL)isValid:;
@end
