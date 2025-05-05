@interface GEOLogMsgStateImpressionObject : PBCodable
@property (nonatomic) BOOL hasImpressionObjectId;
@property (nonatomic) GEOImpressionObjectId impressionObjectId;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
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
- (BOOL)hasImpressionObjectId;
- (id)impressionObjectId;
- (void)setImpressionObjectId:;
+ (BOOL)isValid:;
@end
