@interface SGM2CNtoSGContactsCacheHit : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL hasCacheHit;
@property (nonatomic) BOOL cacheHit;
- (BOOL)hasKey;
- (id)key;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setKey:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasCacheHit;
- (BOOL)cacheHit;
- (void)setCacheHit:;
- (void)setHasCacheHit:;
@end
