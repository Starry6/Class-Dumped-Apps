@interface GEOWiFiConnectionSpeedTest : PBCodable
@property (nonatomic) BOOL hasAvgUL;
@property (nonatomic) float avgUL;
@property (nonatomic) BOOL hasAvgDL;
@property (nonatomic) float avgDL;
- (void)readAll:;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)avgUL;
- (void)setAvgUL:;
- (void)setHasAvgUL:;
- (BOOL)hasAvgUL;
- (float)avgDL;
- (void)setAvgDL:;
- (void)setHasAvgDL:;
- (BOOL)hasAvgDL;
+ (BOOL)isValid:;
@end
