@interface BMPBSiriQueryResult : PBCodable
@property (nonatomic) BOOL hasQid;
@property (nonatomic) NSString qid;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
- (double)confidence;
- (void)setConfidence:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)hasDomain;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasConfidence:;
- (BOOL)hasConfidence;
- (id)qid;
- (BOOL)hasQid;
- (void)setQid:;
@end
