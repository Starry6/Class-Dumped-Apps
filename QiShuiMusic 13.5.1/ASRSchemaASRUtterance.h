@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage
@property (nonatomic) NSArray interpretationIndices;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)interpretationIndices;
- (void)setInterpretationIndices:;
- (void)clearInterpretationIndices;
- (void)deleteInterpretationIndices;
- (void)addInterpretationIndices:;
- (unsigned long long)interpretationIndicesCount;
- (unsigned int)interpretationIndicesAtIndex:;
@end
