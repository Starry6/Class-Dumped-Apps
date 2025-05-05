@interface GEOLogMsgStateMarket : PBCodable
@property (nonatomic) BOOL hasMarket;
@property (nonatomic) NSString market;
- (BOOL)hasMarket;
- (id)market;
- (void)readAll:;
- (void)setMarket:;
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
+ (BOOL)isValid:;
@end
