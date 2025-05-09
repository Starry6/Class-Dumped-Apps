@interface USOSchemaUSOEdgeLabel : SISchemaInstrumentationMessage
@property (nonatomic) I usoElementId;
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) I enumeration;
@property (nonatomic) BOOL hasEnumeration;
@property (nonatomic) USOSchemaUSOLabel baseEdgeLabel;
@property (nonatomic) BOOL hasBaseEdgeLabel;
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
- (void)setUsoElementId:;
- (BOOL)hasUsoElementId;
- (void)setHasUsoElementId:;
- (void)deleteUsoElementId;
- (void)setEnumeration:;
- (BOOL)hasEnumeration;
- (void)setHasEnumeration:;
- (void)deleteEnumeration;
- (BOOL)hasBaseEdgeLabel;
- (void)deleteBaseEdgeLabel;
- (unsigned int)usoElementId;
- (unsigned int)enumeration;
- (id)baseEdgeLabel;
- (void)setBaseEdgeLabel:;
- (void)setHasBaseEdgeLabel:;
@end
