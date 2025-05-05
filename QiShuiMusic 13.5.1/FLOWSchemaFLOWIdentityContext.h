@interface FLOWSchemaFLOWIdentityContext : SISchemaInstrumentationMessage
@property (nonatomic) FLOWSchemaFLOWProfileSwitchContext profileSwitchContext;
@property (nonatomic) BOOL hasProfileSwitchContext;
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
- (BOOL)hasProfileSwitchContext;
- (void)deleteProfileSwitchContext;
- (id)profileSwitchContext;
- (void)setProfileSwitchContext:;
- (void)setHasProfileSwitchContext:;
@end
