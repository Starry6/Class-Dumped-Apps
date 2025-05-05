@interface SISchemaTextToSpeechEnd : SISchemaInstrumentationMessage
@property (nonatomic) NSString aceID;
@property (nonatomic) BOOL hasAceID;
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
- (BOOL)hasAceID;
- (void)deleteAceID;
- (id)aceID;
- (void)setAceID:;
- (void)setHasAceID:;
@end
