@interface GEOPDDatasetABStatus : PBCodable
@property (nonatomic) BOOL hasDatasetId;
@property (nonatomic) I datasetId;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (BOOL)hasDatasetId;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (void)setDatasetId:;
- (BOOL)readFrom:;
- (unsigned int)datasetId;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasDatasetId:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
