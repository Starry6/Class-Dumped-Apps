@interface GEOLogMsgEventBatchTrafficProbe : PBCodable
@property (nonatomic) BOOL hasLocationCollection;
@property (nonatomic) NSData locationCollection;
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
- (BOOL)hasLocationCollection;
- (id)locationCollection;
- (void)setLocationCollection:;
+ (BOOL)isValid:;
@end
