@interface FLOWLINKSchemaFLOWLINKAutoShortcutTemplateUsed : SISchemaInstrumentationMessage
@property (nonatomic) NSString autoshortcutTemplate;
@property (nonatomic) BOOL hasAutoshortcutTemplate;
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
- (BOOL)hasAutoshortcutTemplate;
- (void)deleteAutoshortcutTemplate;
- (id)autoshortcutTemplate;
- (void)setAutoshortcutTemplate:;
- (void)setHasAutoshortcutTemplate:;
@end
