@interface GEOJunctionView : PBCodable
@property (nonatomic) NSMutableArray imageIds;
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
- (id)imageIds;
- (void)setImageIds:;
- (void)clearImageIds;
- (void)addImageId:;
- (unsigned long long)imageIdsCount;
- (id)imageIdAtIndex:;
+ (BOOL)isValid:;
+ (Class)imageIdType;
@end
