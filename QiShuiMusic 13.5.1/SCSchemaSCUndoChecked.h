@interface SCSchemaSCUndoChecked : SISchemaInstrumentationMessage
@property (nonatomic) SCSchemaSCCheckUndoResponse checkUndoResponse;
@property (nonatomic) BOOL hasCheckUndoResponse;
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
- (BOOL)hasCheckUndoResponse;
- (void)deleteCheckUndoResponse;
- (id)checkUndoResponse;
- (void)setCheckUndoResponse:;
- (void)setHasCheckUndoResponse:;
@end
