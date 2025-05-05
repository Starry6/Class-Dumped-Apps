@interface BMPBProbabilityPerLabel : PBCodable
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
- (BOOL)hasLabel;
- (void)writeTo:;
- (void)setLabel:;
- (unsigned long long)hash;
- (id)label;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (double)probability;
- (void)setProbability:;
- (void)setHasProbability:;
- (BOOL)hasProbability;
@end
