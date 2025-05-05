@interface PETAggregatedMessage : PBCodable
@property (nonatomic) BOOL hasKey;
@property (nonatomic) PETAggregationKey key;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) I count;
@property (nonatomic) BOOL hasDistribution;
@property (nonatomic) PETDistribution distribution;
- (id)distribution;
- (void)setCount:;
- (void)setDistribution:;
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
- (unsigned int)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasCount:;
- (BOOL)hasCount;
- (BOOL)hasDistribution;
@end
