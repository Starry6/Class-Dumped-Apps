@interface SISchemaInstrumentationMessage : PBCodable
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (void)willProduceDictionaryRepresentation:;
- (void)unwrapMessageWithCompletion:;
- (id)applySensitiveConditionsPolicy:;
- (id)formattedJsonBody;
- (BOOL)shouldSuppressMessageUnderConditions:;
- (id)_pruneSuppressedMessagesFromArray:underConditions:;
@end
