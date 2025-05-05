@interface GRRSchemaGRRClientEventMetadata : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID grrId;
@property (nonatomic) BOOL hasGrrId;
@property (nonatomic) NSString resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)resultCandidateId;
- (void)setResultCandidateId:;
- (BOOL)hasResultCandidateId;
- (void)deleteResultCandidateId;
- (void)setHasResultCandidateId:;
- (BOOL)hasGrrId;
- (void)deleteGrrId;
- (id)grrId;
- (void)setGrrId:;
- (void)setHasGrrId:;
@end
