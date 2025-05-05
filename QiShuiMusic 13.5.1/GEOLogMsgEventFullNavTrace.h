@interface GEOLogMsgEventFullNavTrace : PBCodable
@property (nonatomic) BOOL hasNavTraceData;
@property (nonatomic) NSData navTraceData;
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
- (BOOL)hasNavTraceData;
- (id)navTraceData;
- (void)setNavTraceData:;
+ (BOOL)isValid:;
@end
