@interface ASRSchemaASRSampledAudioFileEnqueued : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
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
- (BOOL)hasOriginalAsrId;
- (void)deleteOriginalAsrId;
- (id)originalAsrId;
- (void)setOriginalAsrId:;
- (void)setHasOriginalAsrId:;
@end
