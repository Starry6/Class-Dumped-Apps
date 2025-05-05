@interface CNVSchemaCNVIntentReformationEnded : SISchemaInstrumentationMessage
@property (nonatomic) USOSchemaUSOGraph reformedIntent;
@property (nonatomic) BOOL hasReformedIntent;
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
- (BOOL)hasReformedIntent;
- (void)deleteReformedIntent;
- (id)reformedIntent;
- (void)setReformedIntent:;
- (void)setHasReformedIntent:;
@end
