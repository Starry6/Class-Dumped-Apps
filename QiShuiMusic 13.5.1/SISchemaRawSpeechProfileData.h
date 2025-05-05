@interface SISchemaRawSpeechProfileData : SISchemaInstrumentationMessage
@property (nonatomic) NSData r;
@property (nonatomic) BOOL hasR;
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
- (id)r;
- (void)deleteR;
- (void)setR:;
- (BOOL)hasR;
- (void)setHasR:;
@end
