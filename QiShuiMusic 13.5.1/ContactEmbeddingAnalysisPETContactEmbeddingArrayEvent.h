@interface ContactEmbeddingAnalysisPETContactEmbeddingArrayEvent : PBCodable
@property (nonatomic) NSString sessinobd;
@property (nonatomic) NSString userId;
@property (nonatomic) NSMutableArray contactEmbeddings;
- (id)userId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (void)setUserId:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)clearContactEmbeddings;
- (void)addContactEmbedding:;
- (unsigned long long)contactEmbeddingsCount;
- (id)contactEmbeddingAtIndex:;
- (id)sessinobd;
- (void)setSessinobd:;
- (id)contactEmbeddings;
- (void)setContactEmbeddings:;
+ (Class)contactEmbeddingType;
@end
