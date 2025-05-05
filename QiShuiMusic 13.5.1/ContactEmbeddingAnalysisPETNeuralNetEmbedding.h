@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable
@property (nonatomic) Q embeddingsCount;
@property (nonatomic) ^f embeddings;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)embeddingsCount;
- (id)embeddings;
- (void)clearEmbeddings;
- (void)addEmbeddings:;
- (float)embeddingsAtIndex:;
- (void)setEmbeddings:count:;
@end
