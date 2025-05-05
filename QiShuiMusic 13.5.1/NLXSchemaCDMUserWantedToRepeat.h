@interface NLXSchemaCDMUserWantedToRepeat : SISchemaInstrumentationMessage
@property (nonatomic) SISchemaUUID systemDialogActId;
@property (nonatomic) BOOL hasSystemDialogActId;
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
- (BOOL)hasSystemDialogActId;
- (void)deleteSystemDialogActId;
- (id)systemDialogActId;
- (void)setSystemDialogActId:;
- (void)setHasSystemDialogActId:;
@end
