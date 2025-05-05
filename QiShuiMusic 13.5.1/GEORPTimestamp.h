@interface GEORPTimestamp : PBCodable
@property (nonatomic) q seconds;
@property (nonatomic) NSInteger nanos;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (long long)seconds;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setSeconds:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)nanos;
- (void)setNanos:;
+ (BOOL)isValid:;
@end
