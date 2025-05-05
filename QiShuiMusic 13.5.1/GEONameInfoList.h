@interface GEONameInfoList : PBCodable
@property (nonatomic) NSMutableArray nameInfos;
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
- (id)nameInfos;
- (void)setNameInfos:;
- (void)clearNameInfos;
- (void)addNameInfo:;
- (unsigned long long)nameInfosCount;
- (id)nameInfoAtIndex:;
+ (BOOL)isValid:;
+ (Class)nameInfoType;
@end
