@interface GEOImpressionObjectId : PBCodable
@property (nonatomic) BOOL hasHigh;
@property (nonatomic) Q high;
@property (nonatomic) BOOL hasLow;
@property (nonatomic) Q low;
- (BOOL)hasHigh;
- (void)readAll:;
- (unsigned long long)high;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (void)setLow:;
- (BOOL)hasLow;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setHasHigh:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setHigh:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setHasLow:;
- (unsigned long long)low;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isValid:;
@end
