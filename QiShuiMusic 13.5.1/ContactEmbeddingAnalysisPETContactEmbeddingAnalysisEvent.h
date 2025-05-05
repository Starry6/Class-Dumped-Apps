@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable
@property (nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding embeddingsBeforeActivation;
@property (nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding embeddingsAfterActivation;
@property (nonatomic) NSString contactId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (id)contactId;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setContactId:;
- (id)embeddingsBeforeActivation;
- (void)setEmbeddingsBeforeActivation:;
- (id)embeddingsAfterActivation;
- (void)setEmbeddingsAfterActivation:;
@end
